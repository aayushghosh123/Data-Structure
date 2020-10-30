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
    cin>>data;
    start = new node();
    start->data = data;
    start->next = NULL;

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

int main(){
    int n=0;
    cin>>n;

    getdata(n);

    int k=0;
    cin>>k;

    int last_ele=0;

    if(n>k)
    last_ele = n-k;
    else{
        cout<<"-1";
        exit(0);
    }

    node *temp = start;

    while(last_ele--){
        temp = temp->next;
    }

    cout<<temp->data;
}