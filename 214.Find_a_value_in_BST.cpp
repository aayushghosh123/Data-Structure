#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    struct node *left;
    struct node *right;

    node(){
        data=0;
        left=NULL;
        right=NULL;
    }
};

struct node *start=NULL;
struct node *parent;

void bst(int data){
    if(start==NULL){
        start = new node();
        start->data = data;
        start->left = start->right = NULL;
    }
    else{
        node *temp = start;

        while(temp != NULL){
            if(temp->data<data){
                parent = temp;
                temp = temp->right;
            }
            else if(temp->data>data){
                parent = temp;
                temp = temp->left;
            }
        }

        if(data>parent->data){
            parent->right = new node();
            parent->right->data = data;
        }
        else if(data<parent->data){
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

void print_tree(node *start,string s){
    if(start==NULL)
    return;

    print_tree(start->left,s+"->left");
    cout<<s<<" "<<start->data<<endl;
    print_tree(start->right,s+"->right");
}

static int i=0;

void copy_tree(node *start,int *arr){
    if(start==NULL)
    return;
    
    copy_tree(start->left,arr);
    arr[i++] = start->data;
    copy_tree(start->right,arr);
}

int main(){
    int n=0;
    cin>>n;

    getdata(n);

    string s;

    print_tree(start,s);

    int arr[n]={0};

    copy_tree(start,arr);

    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
    cout<<endl;

    int key=0;
    cin>>key;

    for(int i=0;i<n;i++){
        if(arr[i] == key){
            cout<<"Yes the number is present in the tree";
        }
    }
     cout<<"No the number is present in the tree";
}