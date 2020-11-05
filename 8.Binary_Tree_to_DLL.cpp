#include<bits/stdc++.h>
using namespace std;;

struct treenode{
    int data;
    struct treenode *left;
    struct treenode *right;

    treenode(){
        data=0;
        left = right = NULL;
    }
};

struct node{
    int data;
    struct node *before;
    struct node *next;

    node(){
        data=0;
        before = next = NULL;
    }
};

struct treenode *start;
struct node *start1=NULL;

treenode* create_tree(treenode* start,int arr[],int i,int n){
    if(i<n){
        treenode *temp = new treenode();
        temp->data = arr[i];
        start = temp;

        start->left = create_tree(start->left,arr,2*i+1,n);
        start->right = create_tree(start->right,arr,2*i+2,n);
    }
    return start;
}

struct node *x;

void create_DLL(int data){
    if(start1 == NULL){
        start1 = new node();
        start1->data = data;
        x = start1;
    }
    else{
        struct node *newdata = new node();
        newdata->data = data;
        x->next = newdata;
        newdata->before = x;
        x = x->next;
    }
}

void tree_to_LL(treenode *start){
    if(start==NULL)
    return;

    tree_to_LL(start->left);
    create_DLL(start->data);
    tree_to_LL(start->right);
}

void print_DLL(node *start1){
    node *temp = start1;

    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}

int main(){
    int n=0;
    cin>>n;

    int arr[n]={0};

    for(int i=0;i<n;i++)
    cin>>arr[i];

    start = create_tree(start,arr,0,n);

    tree_to_LL(start);

    print_DLL(start1);
}