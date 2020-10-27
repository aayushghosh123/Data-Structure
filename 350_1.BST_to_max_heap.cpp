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

void bst(int data){
    if(start == NULL){
        start = new node();
        start->data = data;
        start->left = start->right = NULL;
    }
    else{
        node *temp = start;
        node *parent;

        while(temp != NULL){
            if(temp->data > data){
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

static int i=0;

void copy_bst(node *start,int *arr){
    if(start == NULL)
    return;

    copy_bst(start->left,arr);
    arr[i++] = start->data;
    copy_bst(start->right,arr);
}

static int j=0;

void create_tree(node *start,int arr[]){
    if(start==NULL)
    return;
    
    create_tree(start->left,arr);
    create_tree(start->right,arr);
    start->data = arr[j++];
}

void print_tree(node *start){
    if(start == NULL)
    return;

    print_tree(start->left);
    print_tree(start->right);
    cout<<start->data<<" ";
}

int main(){
    int n=0;
    cin>>n;

    getdata(n);

    int arr[n]={0};

    copy_bst(start,arr);

    create_tree(start,arr);

    print_tree(start);
}