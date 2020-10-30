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
    }
    else{
        node *temp = start;

        while(temp != NULL){
            if(temp->data > data){
                parent = temp;
                temp = temp->left;
            }
            else if(temp->data < data){
                parent = temp;
                temp = temp->right;
            }
        }

        if(parent->data < data){
            parent->right = new node();
            parent->right->data = data;
        }
        else if(parent->data > data){
            parent->left = new node();
            parent->left->data = data;
        }
    }
}

void getdata(int arr[],int n){
    for(int i=0;i<n;i++){
        bst(arr[i]);
    }
}

void post_order(node *start){
    if(start==NULL)
    return;

    post_order(start->left);
    post_order(start->right);
    cout<<start->data<<" ";
}

int main(){
    int n=0;
    cin>>n;

    int arr[n]={0};

    for(int i=0;i<n;i++)
    cin>>arr[i];

    getdata(arr,n);

    post_order(start);
}