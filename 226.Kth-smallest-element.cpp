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
struct node *parent;

void bst(int data){
    if(start==NULL){
    start = new node();
    start->data = data;
    }
    else{
        node *temp = start;

        while(temp != NULL){
            if(temp->data>data){
                parent = temp;
                temp = temp->left;
            }
            else if(temp->data<data){
                parent = temp;
                temp = temp->right;
            }
        }
        if(parent->data<data){
            parent->right = new node();
            parent->right->data = data;
        }
        else if(parent->data>data){
            parent->left = new node();
            parent->left->data = data;
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

void copy_array(node *start,int *arr){
    if(start==NULL)
    return;

    copy_array(start->left,arr);
    arr[i++] = start->data;
    copy_array(start->right,arr);
}

int main(){
    int n=0;
    cin>>n;

    getdata(n);

    int arr[n]={0};

    copy_array(start,arr);

    int k=0;
    cin>>k;

    if(k<=n-1){
        cout<<arr[k];
    }
    else{
        cout<<"-1";
    }
}