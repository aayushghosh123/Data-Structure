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
}

void find_middle(node *start,int n){
    int mid = n/2;

    node *temp = start;

    while(mid--){
        temp = temp->next;
    }

    cout<<temp->data;
}

int main(){
    int n=0;
    cin>>n;

    getdata(n);


    if(start->next==NULL){
        start->data;
    }
    else
    find_middle(start,n);
}