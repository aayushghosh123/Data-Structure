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

void palindrome(node *start){
    stack<int>s;

    node *temp = start;

    while(temp != NULL){
        s.push(temp->data);
        temp = temp->next;
    }

    temp = start;

    while(s.empty()==false){
        if(s.top() != temp->data){
            cout<<"Not a Palindrome";
            exit(0);
        }
        s.pop();
        temp = temp->next;
    }
    cout<<"A Palindrome";
}

int main(){
    int n=0;
    cin>>n;

    getdata(n);

    palindrome(start);
}