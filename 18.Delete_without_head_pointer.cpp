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
struct node *start2=NULL;

void getdata(int n){
    int data=0;

    start = new node();
    cin>>data;

    start->data = data;
    start->next = NULL;
    
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

void delete_without_head(node *temp){
    if(temp == start){
        start = start->next;
        temp = NULL;
    }
    else if(temp->next == NULL){
        temp = NULL;
    }
    else{
        node *before = temp;
        while(temp->next != NULL){
            temp->data = temp->next->data;
            before = temp;
            temp = temp->next;
        }
        before->next = NULL;
    }

    node *t = start;

    while(t != NULL){
        cout<<t->data<<" ";
        t = t->next;
    }
}

int main(){
    int n=0;
    cin>>n;

    getdata(n);

    node *temp = start;

    temp = temp->next->next;

    delete_without_head(temp);
}