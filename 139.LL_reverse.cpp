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

struct node *start = NULL;

void getdata(int n){
    int data=0;

    start = new node();
    cin>>data;
    start->data = data;
    start->next = NULL;

    if(start != NULL){
        struct node *temp = start;
        struct node *newdata;
        for(int i=1;i<n;i++){
            cin>>data;
            newdata = new node();
            newdata->data = data;
            newdata->next = NULL;
            temp->next = newdata;
            temp = temp->next;
        }
    }
}

void rotate_list(node *start){
    node *curr = start;
    node *after = NULL;
    node *before = NULL;

    while(curr != NULL){
        after = curr->next;
        curr->next = before;
        before = curr;
        curr = after;
    }

    start = before;

    node *temp = start;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}

int main(){
    int n=0;
    cin>>n;

    getdata(n);

    rotate_list(start);
}