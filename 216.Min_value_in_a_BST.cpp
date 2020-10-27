#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    struct node *left;
    struct node *right;

    node(){
        data=0;
        left = right = NULL;
    }
};

struct node *start=NULL;
struct node *parent;

void bst(int data){
    if(start==NULL){
        start = new node();
        start->data = data;
        start->left = start->right = NULL;
    }
    else{
        node *temp = start;

        while(temp != NULL){
            if(temp->data>data){
                parent = temp;
                temp = temp->left;
            }
            else if(temp->data<data){
                parent = temp;
                temp = temp->right;
            }
        }

        if(parent->data>data){
            parent->left = new node();
            parent->left->data = data;
        }
        else if(parent->data<data){
            parent->right = new node();
            parent->right->data = data;
        }
    }
}

void getdata(int n){
    int data=0;
    for(int i=0;i<n;i++){
        cin>>data;
        bst(data);
    }
}

int min_value(node *start){
    while(start->left != NULL){
        start = start->left;
    }
    return start->data;
}

int main(){
    int n=0;
    cin>>n;

    getdata(n);

    cout<<min_value(start);
}