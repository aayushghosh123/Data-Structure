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

struct node *start;
struct node *start1;

void getdata(int n){
    int data=0;
    start = new node();
    cin>>data;
    start->data = data;
    start->next = NULL;


    struct node *temp = start;
    struct node *newdata;

    for(int i=1;i<n;i++){
        newdata = new node();
        cin>>data;

        newdata->data = data;
        newdata->next = NULL;
        temp->next = newdata;
        temp = temp->next;
    }
}

void sum_linked_list(node *start,node *start1){
    int carry=0;
    node *temp = start;
    node *temp1 = start1;
    while(temp != NULL || temp1 != NULL){
        if((carry + temp->data + temp1->data)>10){
            temp->data = (carry + temp->data + temp1->data)%10;
            carry = (carry + temp->data + temp1->data)/10;
        }
        else{
            temp->data = temp->data + temp1->data + carry;
            carry=0;
        }

        temp = temp->next;
        temp1 = temp1->next;
    }

    if(carry>0){
        struct node *newdata  = new node();
        newdata->data = carry;
        newdata->next = NULL;
        temp->data = newdata;
        temp = temp->next;
    }
    temp = start;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}

void reverse_linked_list(node *start1){
    node *before = NULL;
    node *after = NULL;
    node *curr = start1;

    while(curr != NULL){
        after = curr->next;
        curr->next = before;
        before = curr;
        curr = after;
    }

    start1 = before;

    sum_linked_list(start,start1);
}

void getdata(int n,int m){
    int data=0;
    start1 = new node();
    cin>>data;
    start1->data = data;
    start1->next = NULL;


    struct node *temp = start1;
    struct node *newdata;

    for(int i=1;i<m;i++){
        newdata = new node();
        cin>>data;

        newdata->data = data;
        newdata->next = NULL;
        temp->next = newdata;
        temp = temp->next;
    }

    for(int i=m;i<n;i++){
        newdata = new node();
        newdata->data = 0;
        newdata->next = NULL;
        temp->next = newdata;
        temp = temp->next;
    }
}

int main(){
    int n=0;
    cin>>n;

    int m=0;
    cin>>m;

    getdata(n);
    
    getdata(n,m);

    reverse_linked_list(start1);
}