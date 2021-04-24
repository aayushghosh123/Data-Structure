#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    struct node *next;

    node(){
        data = 0;
        next = NULL;
    }
};

node *getdata(int n,node *start){
    int data=0;
    
    start = new node();
    cin>>data;
    start->data = data;

    if(start != NULL){
        node *temp = start;
        node *newdata;

        for(int i=1;i<n;i++){
            cin>>data;
            newdata = new node();
            newdata->data = data;
            temp->next = newdata;
            temp = temp->next;
        }
        free(temp);
    }
    return start;
}

void showdata(node *start){
    node *temp = start;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}

node* reverse_ll(node *start){
        node *curr = start;
        node *before = NULL;
        node *after = NULL;

        while(curr != NULL){
            after = curr->next;
            curr->next = before;
            before = curr;
            curr = after;
        }

    return before;
}

void add_linked_list(node *start,node *start2){
    start = reverse_ll(start);
    start2 = reverse_ll(start2);

    node *temp1 = start;
    node *temp2 = start2;
    node *temp3;
    int carry=0;

    while(temp1 != NULL && temp2!= NULL){
        if((temp1->data+temp2->data+carry)>9){
            temp1->data = (temp1->data+temp2->data+carry)%10;
            carry = (temp1->data+temp2->data+carry)/10;
            temp3 = temp1;
            temp1 = temp1->next;
            temp2 = temp2->next;
        }
        else{
            temp1->data = (temp1->data+temp2->data+carry);
            carry = 0;
            temp3 = temp1;
            temp1 = temp1->next;
            temp2 = temp2->next;
        }
    }

    if(carry==0){
        reverse_ll(start);
    }
    else{
        if(temp1==NULL){
        while(carry>0){
            node *newdata = new node();
            newdata->data = carry%10;
            carry = carry/10;
            temp3->next = newdata;
            temp3 = temp3->next;
        }
        }
        else{
            while(temp1 != NULL){
                if((temp1->data+carry)>9){
                    temp1->data = (temp1->data+carry)%10;
                    carry = (temp1->data+carry)/10;
                    temp3 = temp1;
                    temp1 = temp1->next;
                }
            }
            while(carry>0){
            node *newdata = new node();
            newdata->data = carry%10;
            carry = carry/10;
            temp3->next = newdata;
            temp3 = temp3->next;
            }
        }
        reverse_ll(start);
    }
    showdata(start);
}

int main(){
    int n=0;
    cin>>n;

    int m=0;
    cin>>m;

    struct node *start;
    struct node *start2;

    if(n>m){
    start = getdata(n,start);
    start2 = getdata(m,start2);
    }
    else{
    start = getdata(m,start);
    start2 = getdata(n,start2);
    }
    add_linked_list(start,start2);
}