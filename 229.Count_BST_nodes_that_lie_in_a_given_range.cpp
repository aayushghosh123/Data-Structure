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
struct node *parent; 

void bst(int data){
    if(start==NULL){
        start = new node();
        start->data = data;
    }
    else{
        node *temp = start;

        while(temp != NULL){
            if(temp->data > data){
                parent = temp;
                temp = temp->left;
            }
            else if(temp->data < data){
                parent = temp;
                temp = temp->right;
            }
        }

        if(parent->data < data){
            parent->right = new node();
            parent->right->data = data;
        }
        else if(parent->data > data){
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

void copy_tree(node *start,int *arr){
    if(start==NULL)
    return;

    copy_tree(start->left,arr);
    arr[i] = start->data;
    i++;
    copy_tree(start->right,arr);
}

void find_element_count(int arr[],int n,int k,int l){
    int count=0;
    for(int i=0;i<n;i++){
        if(arr[i]>=k && arr[i]<=l){
            count++;
        }
    }
    cout<<count;
}

static int c=0;

void find_element_count(node *start,int k,int l){
    if(start==NULL)
    return;

    find_element_count(start->left,k,l);
    if(start->data >=k && start->data<=l){
        c++;
    }
    find_element_count(start->right,k,l);
}

int main(){
    int n=0;
    cin>>n;

    getdata(n);

    int k=0,l=0;

    cin>>k>>l;

    /*        WAY 1

    int arr[n]={0};

    copy_tree(start,arr);

    if(k<l){
        find_element_count(arr,n,k,l);
    }
    else{
        swap(l,k);
        find_element_count(arr,n,k,l);
    }
    */

    //         Way 2

    if(k<l){
        find_element_count(start,k,l);
    }
    else{
        swap(l,k);
        find_element_count(start,k,l);
    }

    cout<<c;
}