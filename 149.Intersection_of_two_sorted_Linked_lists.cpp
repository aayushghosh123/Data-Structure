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
struct node *start1=NULL;

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

void getdata2(int n){
    int data=0;
    start1 = new node();
    cin>>data;
    start1->data = data;
    start1->next = NULL;

    node *temp = start1;
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

void intersection_of_two_LL(node *start,node *start1){
    node *temp = start;
    node *temp1 = start1;

    while(temp != NULL || temp1 != NULL){
        if(temp->data == temp1->data){
            cout<<temp->data<<" ";
            temp = temp->next;
            temp1 = temp1->next;
        }
        else if(temp->data > temp1->data){
            temp1 = temp1->next;
        }
        else if(temp->data<temp1->data){
            temp = temp->next;
        }
    }
}

int main(){
    int n=0;
    cin>>n;

    getdata(n);

    int m=0;
    cin>>m;

    getdata2(m);

    intersection_of_two_LL(start,start1);
}