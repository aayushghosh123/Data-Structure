#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    struct node *next;

    node(){
        data=0;
        next=NULL;
    }
};

struct node *start;

void getdata(int n){
    int data=0;
    cin>>data;

    start = new node();
    start->data = data;

    node *temp = start;
    for(int i=1;i<n;i++){
        cin>>data;
        node *newdata = new node();
        newdata->data = data;
        newdata->next = NULL;
        temp->next = newdata;
        temp = temp->next;
    }
}

void print_LL(){
    node *temp = start;

    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}

node *reverse_LL(){
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

void add_one(){
    start = reverse_LL();

    // cout<<"Original LL is reversed"<<endl;

    // print_LL();
    // cout<<endl;

    node *temp = start;
    int carry=0;

    while(temp != NULL){
        if(temp == start){
        if((temp->data + 1)>9){
        carry = (temp->data + 1)/10;
        temp->data = (temp->data + 1)%10;
        }
        else{
        temp->data = (temp->data + 1);
        }
        }
        else{
            if((temp->data + carry)>9){
                carry = (temp->data + carry)/10;
                temp->data = (temp->data + carry)%10;
            }
            else{
                temp->data = (temp->data + carry);
                carry=0;
            }
        }
        temp = temp->next;
    }

    while(carry>0){
        node *newdata = new node();
        newdata->data = carry%10;
        carry = carry/10;
        temp->next = newdata;
        temp = temp->next;
    }

    start = reverse_LL();

    print_LL();
}

int main(){
    int n=0;
    cin>>n;

    getdata(n);

    add_one();
}