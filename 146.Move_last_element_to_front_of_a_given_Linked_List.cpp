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
    int data=0;
    start = new node();

    cin>>data;
    start->data = data;
    start->next = NULL;
    

    struct node *newdata;
    struct node *temp = start;

    for(int i=1;i<n;i++){
        cin>>data;
        newdata = new node();
        newdata->data = data;
        newdata->next = NULL;
        temp->next = newdata;
        temp = temp->next;
    }
}

void add_lastnode_to_first(node *start){
    node *temp = start;
    node *end = start;

    while(end->next != NULL){
        temp = end;
        end = end->next;
    }

    // cout<<end->data<<" "<<temp->data<<endl;

    temp->next = NULL;
    end->next = start;

    start = end;

    temp = start;

    // cout<<start->data;

    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}

int main(){
    int n=0;
    cin>>n;

    getdata(n);

    add_lastnode_to_first(start);
}