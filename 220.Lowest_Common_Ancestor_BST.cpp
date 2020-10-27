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

struct node *start=NULL;
struct node *parent;

void bst(int data){
    if(start==NULL){
        start = new node();
        start->data  = data;
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

void print_tree(node *start,string s){
    if(start==NULL)
    return;

    print_tree(start->left,s+"->left");
    cout<<s<<" "<<start->data<<endl;
    print_tree(start->right,s+"->right");
}

void getdata(int n){
    int data=0;

    for(int i=0;i<n;i++){
        cin>>data;
        bst(data);
    }
}

node* lca_in_a_bst(node *start,int n1,int n2){
    while(start != NULL){
        if(start->data>n1 && start->data>n2)
        start = start->left;
        else if(start->data<n1 && start->data<n2)
        start = start->right;

        else break;
    }
    return start;
}

int main(){
    int n=0;
    cin>>n;

    getdata(n);

    string s;
    print_tree(start,s);

    int n1=0,n2=0;

    cin>>n1>>n2;

    node *temp;

    temp = lca_in_a_bst(start,n1,n2);

    cout<<temp->data;
}