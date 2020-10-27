#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    struct node *left;
    struct node *right;

    node(){
        data=0;
        left=NULL;
        right=NULL;
    }
};

struct node *start;

node *create_tree(node* start,int arr[],int i,int n){
    if(i<n){
        node *temp = new node();
        temp->data = arr[i];
        start = temp;

        start->left = create_tree(start->left,arr,2*i+1,n);
        start->right = create_tree(start->right,arr,2*i+2,n);
    }
    return start;
}



void left_view(node *temp){
    if(temp == NULL)
    return;

    cout<<temp->data<<" ";
    left_view(temp->left);
}

void right_view(node *temp){
    if(temp == NULL)
    return;
    
    cout<<temp->data<<" ";
    right_view(temp->right);
}


int main(){
    int n=0;
    cin>>n;

    int arr[n]={0};

    for(int i=0;i<n;i++)
    cin>>arr[i];

    start = create_tree(start,arr,0,n);
    
    cout<<start->data<<" ";
    right_view(start->right);
    left_view(start->left);
}