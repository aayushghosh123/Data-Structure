#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    struct node *next;
    node(){
        data=0;
        next = NULL;
    }
};

struct node *start =NULL;

void getdata(int n){
    int data=0;
    start = new node();
    cin>>data;
    start->data = data;
    start->next = NULL;

    node *temp = start;
    node *newdata;

    for(int i=1;i<n;i++){
        newdata = new node();
        cin>>data;
        newdata->data = data;
        newdata->next = NULL;
        temp->next = newdata;
        temp = temp->next;
    }
    int c=0;
    cin>>c;

    if(c==1)
    temp->next = start;
}

void circular_list(node *start,int n){
    node *temp  = start;

    int count=0;

    while(temp != NULL){
        if(count>n)
        break;

        temp = temp->next;
        count++;
    }

    if(count>n){
        cout<<"Circular Linked List";
    }
    else{
        cout<<"Not a Circular Linked List";
    }
}

int main(){
    int n=0;
    cin>>n;

    getdata(n);

    circular_list(start,n);
}