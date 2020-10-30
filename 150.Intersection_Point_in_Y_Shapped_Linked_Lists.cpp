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

void find_intersection(node *start,node *start1){
    unordered_map<int,int>m1;

    node *temp = start;

    while(temp != NULL){
        m1[temp->data]++;
        temp = temp->next;
    }

    temp = start1;

    while(temp != NULL){
        m1[temp->data]++;
        temp = temp->next;
    }

    unordered_map<int,int>::iterator i;

    for(i = m1.begin(); i!=m1.end();i++){
        if(i->second > 1){
            cout<<i->first;
            exit(0);
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

    find_intersection(start,start1);
    
}