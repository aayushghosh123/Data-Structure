#include<bits/stdc++.h>
using namespace std;

struct node { 
    int data; 
    struct node *left, *right; 
}; 

struct node* newNode(int data) 
{ 
    struct node* temp = (struct node*)malloc(sizeof(struct node)); 
  
    temp->data = data; 
    temp->left = temp->right = NULL; 
  
    return temp; 
} 

void left_print(node *root){
    if(root->left==NULL)
    return;

    cout<<root->data<<" ";
    left_print(root->left);
}

void print_base(node *root){
    if(root ==NULL)
    return;

    print_base(root->left);
    
    if(!root->left && !root->right)
    cout<<root->data<<" ";

    print_base(root->right);
}

void right_print(node *root,stack<int>&s){
    if(root->right==NULL)
    return;

    s.push(root->data);
    right_print(root->right,s);
}

int main() 
{
    struct node* root = newNode(20); 
    root->left = newNode(8); 
    root->left->left = newNode(4); 
    root->left->right = newNode(12); 
    root->left->right->left = newNode(10); 
    root->left->right->right = newNode(14); 
    root->right = newNode(22); 
    root->right->right = newNode(25); 
  
    cout<<root->data<<" ";
    left_print(root->left);
    print_base(root);

    stack<int>s;

    right_print(root->right,s);

    while(s.empty()==false){
        cout<<s.top()<<" ";
        s.pop();
    }

  
    return 0; 
} 