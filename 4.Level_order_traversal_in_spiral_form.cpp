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

void level_order_traversal(node *start){
    if(start==NULL)
    return;
    
    bool check = true;
    stack<node*>s1;
    stack<node*>s2;

    s1.push(start);

    while(s1.empty()==false){
        node *temp = s1.top();
        s1.pop();

        if(temp){
            cout<<temp->data<<" ";
            if(check){
            if(temp->left)
            s2.push(temp->left);
            if(temp->right)
            s2.push(temp->right);
            }
            else
            {
            if(temp->right)
            s2.push(temp->right);
            if(temp->left)
            s2.push(temp->left);
        }
        }

        if(s1.empty()){
            swap(s1,s2);
            check = !check;
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

    level_order_traversal(start);
}