#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    struct node *next;

    node(){
        data = 0;
        next = NULL;
    }
};

struct node *start;

void print(){
    node *temp = start;

    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}

void getdata(int n){
    int data=0;
    cin>>data;

    start = new node();
    start->data = data;

    node *temp = start;

    for(int i=1;i<n;i++){
        node *newdata = new node();
        cin>>data;
        newdata->data = data;
        newdata->next = NULL;
        temp->next = newdata;
        temp = temp->next;
    }
    free(temp);
}

void remove_duplicate_and_print(){
    node *curr = start;
    node *before = NULL;

    unordered_set<int>ss;

    while(curr != NULL){
        if(ss.find(curr->data) != ss.end()){
            before->next = curr->next;
            free(curr);
        }
        else{
            ss.insert(curr->data);
            before = curr;
        }
        curr = curr->next;
    }

    print();
}

int main(){
    int n=0;
    cin>>n;

    getdata(n);

    remove_duplicate_and_print();
}