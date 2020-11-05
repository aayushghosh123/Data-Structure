#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    struct node *left;
    struct node *right;

    node(){
        data = 0;
        left = right = NULL;
    }
};

struct node *start = NULL;

node *create_tree(node *start,int arr[],int i,int n){
    if(i<n){
        node *temp = new node();
        temp->data = arr[i];
        start = temp;

        start->left = create_tree(start->left,arr,2*i+1,n);
        start->right = create_tree(start->right,arr,2*i+2,n);
    }
    return start;
}

void vertical_ordering(node *start,int x,map<int,vector<int>>m1){
    if(start==NULL)
    return;

    m1[x].push_back(start->data);

    vertical_ordering(start->left,x-1,m1);
    vertical_ordering(start->right,x+1,m1);
}

void print_vertical(node *start){

    map<int,vector<int>>m1;

    int x=0;

    vertical_ordering(start,x,m1);

    map<int,vector<int>>::iterator it;

    for(it=m1.begin();it!=m1.end();it++){
        for(int i=0;i<it->second.size();++i)
        cout<<it->second[i]<<" ";
    cout<<endl;
    }
}

int main(){
    int n=0;
    cin>>n;

    int arr[n]={0};

    for(int i=0;i<n;i++)
    cin>>arr[i];

    start = create_tree(start,arr,0,n);

    print_vertical(start);
}