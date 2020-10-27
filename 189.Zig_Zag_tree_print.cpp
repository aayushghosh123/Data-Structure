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

struct node *start;

node *create_tree(node *start,int arr[],int i,int n){
    if(i<n){
        node *temp = new node();
        temp->data = arr[i];
        start = temp;

        start->left = create_tree(start->left,arr,2*i+1,n);
        start->right = create_tree(start->right,arr,2*i+2,n);
    }
    return start;
}

void zig_zag_print(node *start){

    stack<node*>q;
    stack<node*>q2;

    q.push(start);
    bool check = true;
    while(q.empty()==false){
    node *temp = q.top();
    q.pop();

    if(temp){
        cout<<temp->data<<" ";
        if(check){
            if(temp->left)
            q2.push(temp->left);
            if(temp->right)
            q2.push(temp->right);
        }
        else{
            if(temp->right)
            q2.push(temp->right);
            if(temp->left)
            q2.push(temp->left);
        }
    }

    if(q.empty()){
        check = !check;
        swap(q,q2);
    }
    }
}

int main(){
    int n=0;
    cin>>n;

    int arr[n]={0};

    for(int i=0;i<n;i++)
    cin>>arr[i];

    start = create_tree(start,arr,0,n);

    zig_zag_print(start);
}