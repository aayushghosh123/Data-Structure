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

struct node *start = NULL;

void getdata(int n){
    int data;

    start = new node();
    cin>>data;
    start->data = data;

    node *temp = start;

    for(int i=1;i<n;i++){
        node *newdata = new node();
        cin>>data;
        newdata->data = data;
        newdata->next = NULL;
        temp->next = newdata;
        temp = temp->next;
    }
}

void pairwise_swap(node *start){
    node *temp = start;

    while(temp != NULL){
        int x = temp->data;
        temp->data = temp->next->data;
        temp->next->data = x;
        temp = temp->next->next;
    }

    temp = start;

    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}

int main(){
    int n=0;
    cin>>n;

    getdata(n);

    pairwise_swap(start);
}