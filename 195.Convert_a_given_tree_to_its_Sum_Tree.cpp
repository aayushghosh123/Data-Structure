#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    struct node *left;
    struct node *right;

    node(){
        data=0;
        left = NULL;
        right = NULL;
    }
};

struct node *start = NULL;

node* create_tree(node *start,int arr[],int i,int n){
    if(i<n){
        node *temp = new node();
        temp->data = arr[i];
        start = temp;

        start->left = create_tree(start->left,arr,2*i+1,n);
        start->right = create_tree(start->right,arr,2*i+2,n);
    }
    return start;
}

int sum_tree(node *start){
    if(start==NULL)
    return 0;

    int old_value = start->data;

    start->data = sum_tree(start->left) + sum_tree(start->right);

    return start->data + old_value;
}

int main(){
    int n=0;

    cin>>n;

    int arr[n]={0};

    for(int i=0;i<n;i++)
    cin>>arr[i];

    start = create_tree(start,arr,0,n);

    cout<<sum_tree(start);
}