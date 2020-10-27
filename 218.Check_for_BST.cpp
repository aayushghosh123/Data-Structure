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

struct node *start = NULL;

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

void check_for_BST(node *start){
    queue<node*>q;

    q.push(start);

    while(q.empty()==false){
        node *temp = q.front();
        q.pop();

        if(temp->left && temp->right){
            if(temp->data>temp->left->data && temp->data<temp->right->data){
                q.push(temp->left);
                q.push(temp->right);
            }
            else{
                cout<<"Not a BST";
                exit(0);
            }
        }
        else if(!temp->left){
            if(temp->data<temp->right->data){
                q.push(temp->right);
            }
            else{
                cout<<"Not a BST";
                exit(0);
            }
        }
        else if(!temp->right){
            if(temp->data>temp->left->data){
                q.push(temp->left);
            }
            else{
                cout<<"Not a BST";
                exit(0);
            }
        }
        else if(!temp->left && !temp->right)
        continue;
    }
    cout<<"It's a BST";
}

int main(){
    int n=0;
    cin>>n;

    int arr[n]={0};

    for(int i=0;i<n;i++)
    cin>>arr[i];

    start = create_tree(start,arr,0,n);

    check_for_BST(start);
}