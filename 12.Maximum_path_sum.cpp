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

node *lca(node *start,int a,int b){
    if(start==NULL)
    return NULL;

    if(start->data>a && start->data>b){
        return lca(start->left,a,b);
    }

    if(start->data<a && start->data<b){
        return lca(start->right,a,b);
    }
    return start;
}
int distancefromroot(node *start,int a){
    if(start->data == a)
    return 0;
    else if(start->data>a){
        return 1+distancefromroot(start->left,a);
    }
    return 1 + distancefromroot(start->right,a);
}

int distance_bw_two(node *start,int a,int b){
    if(start==NULL)
    return 0;

    if(start->data>a && start->data>b){
        return distance_bw_two(start->left,a,b);
    }

    if(start->data<a && start->data<b){
        return distance_bw_two(start->right,a,b);
    }

    if(start->data>a && start->data<b){
        return distancefromroot(start,a) + distancefromroot(start,b);
    }
}

int find_distance(node *start,int a,int b){
    if(a>b){
        swap(a,b);
    }

    return distance_bw_two(start,a,b);
}

int main(){
    int n=0;
    cin>>n;

    getdata(n);

    int a=0,b=0;
    cin>>a>>b;

    cout<<find_distance(start,a,b);
}