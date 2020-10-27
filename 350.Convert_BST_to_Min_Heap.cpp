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

void bst_copy(node *start,int *arr){
    if(start==NULL)
    return;

    bst_copy(start->left,arr);
    arr[i++] = start->data;
    bst_copy(start->right,arr);
}

static int j=0;

void bst_to_minHeap(node *start,int arr[]){
    if(start == NULL)
    return;

    start->data = arr[j++];
    bst_to_minHeap(start->left,arr);
    bst_to_minHeap(start->right,arr);
}

void print_heap(node *start){
    if(start == NULL)
    return;

    cout<<start->data<<" ";
    print_heap(start->left);
    print_heap(start->right);
}

int main(){
    int n=0;
    cin>>n;

    getdata(n);

    int arr[n]={0};

    bst_copy(start,arr);
    
    bst_to_minHeap(start,arr);

    print_heap(start);

}