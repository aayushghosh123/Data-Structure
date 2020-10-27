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

struct node *start;

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

void print_list(node *start){
    if(start == NULL){
        cout<<"GMBK"<<endl;
    }
    else{
        node *temp = start;
        while(temp != NULL){
            cout<<temp->data<<" ";
            temp = temp->next;
        }
    }
    exit(0);
}

void remove_duplicate(node *start){
    if(start==NULL || start->next == NULL){
        print_list(start);
    }

    node *curr = start;
    node *after = start->next;

    while(after != NULL){
        if(curr->data == after->data){
            after = after->next;
            curr->next = after;
        }
        else{
            curr = curr->next;
            after = after->next;
        }
    }
    print_list(start);
}

int main(){
    int n=0;
    cin>>n;

    getdata(n);

    remove_duplicate(start);
}