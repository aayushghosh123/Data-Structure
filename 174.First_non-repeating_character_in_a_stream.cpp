#include<bits/stdc++.h>
using namespace std;

struct node{
    char data;
    struct node *next;

    node(){
        data='\0';
        next=NULL;
    }
};

struct node *start = NULL;

void getdata(int n){
    char data=0;
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

void find_first_non_repeating(node *start){
    unordered_map<char,int>m1;

    node* temp = start;

    while(temp != NULL){
        m1[temp->data]++;
        temp = temp->next;
    }

    unordered_map<char,int>::iterator i;

    for(i=m1.begin();i!=m1.end();i++){
        if(i->second==1){
            cout<<"The first non-repeating character is :- "<<i->first;
            exit(0);
        }
    }
}

int main(){
    int n=0;
    cin>>n;

    getdata(n);

    find_first_non_repeating(start);
}