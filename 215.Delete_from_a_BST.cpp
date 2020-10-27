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

void print_tree(node *start,string s){
    if(start==NULL)
    return;

    print_tree(start->left,s+"->left");
    cout<<s<<" "<<start->data<<endl;
    print_tree(start->right,s+"->right");
}

node *minimum_value(node *start){
    if(start->left == NULL)
    return NULL;

    return minimum_value(start->left);
}

node* delete_element(node *start,int data){
    if(start==NULL)
    return NULL;
    else if(start->data>data){
        start->left = delete_element(start->left,data);
    }
    else if(start->data<data){
        start->right = delete_element(start->right,data);
    }
    else{
        if(!start->left && !start->right)
        start = NULL;
        else if(!start->left){
            start = start->right;
        }
        else if(!start->right){
            start = start->left;
        }
        else{
            node *min_value = minimum_value(start->right);
            start->data = min_value->data;
            start->right = delete_element(start->right,min_value->data);
        }
    }
    return start;
}

int main(){
    int n=0;
    cin>>n;

    getdata(n);

    string s;

    print_tree(start,s);

    int data=0;
    cin>>data;

    start = delete_element(start,data);

    print_tree(start,s);
}