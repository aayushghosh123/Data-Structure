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

void getdata1(int m){
    int data=0;

    start2 = new node();
    cin>>data;

    start2->data = data;
    start2->next = NULL;
    
    node *temp = start2;

    for(int i=1;i<m;i++){
        node *newdata = new node();
        cin>>data;
        newdata->data = data;
        newdata->next = NULL;
        temp->next = newdata;
        temp = temp->next;
    }
}

void find_sum(node *start,node *start2){
    int sum = -1,sum2=-1;

    node *temp = start;
    while(temp != NULL){
        if(sum==-1){
            sum = temp->data;
        }
        else{
            sum = sum*10 + temp->data;
        }
        temp = temp->next;
    }

    temp = start2;
    while(temp != NULL){
        if(sum2==-1){
            sum2 = temp->data;
        }
        else{
            sum2 = sum2*10 + temp->data;
        }
        temp = temp->next;
    }

    cout<<sum+sum2;
}

int main(){
    int n=0;
    cin>>n;

    getdata(n);

    int m=0;
    cin>>m;

    getdata1(m);

    find_sum(start,start2);
}