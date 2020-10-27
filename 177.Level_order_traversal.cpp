#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    struct node *left;
    struct node *right;

    node(){
        data = 0;
        left = NULL;
        right = NULL;
    }
};

struct node *start;

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

void print_tree(node *start){
    queue<node *>q;

    q.push(start);

    while(q.empty()==false){
        node *temp = q.front();
        q.pop();

        cout<<temp->data<<" ";

        if(temp->left && temp->right){
            q.push(temp->left);
            q.push(temp->right);
        }
        else if(temp->left && !temp->right){
            q.push(temp->left);
        }
        else if(!temp->left && temp->right){
            q.push(temp->right);
        }
        else if(!temp->left && !temp->right){
            if(q.empty()==false)
            continue;
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

    print_tree(start);
}