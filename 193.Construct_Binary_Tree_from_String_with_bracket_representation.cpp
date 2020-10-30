#include<bits/stdc++.h>
using namespace std;

struct node{
    char data;
    struct node *left;
    struct node *right;

    node(){
        data='\0';
        left = right = NULL;
    }
};

struct node *start = NULL;

node* create_tree(node *start,char arr[],int i,int n){
    if(i<n){
        node *temp = new node();
        temp->data = arr[i];
        start = temp;

        start->left = create_tree(start->left,arr,2*i+1,n);
        start->right = create_tree(start->right,arr,2*i+2,n);
    }
    return start;
}

void print_tree(node *start){
    if(start==NULL)
    return;

    cout<<start->data<<" ";
    print_tree(start->left);
    print_tree(start->right);
}

void count_input(string s,int count){
    int n = s.length();

    for(int i=0;i<n;i++){
        if(s[i]>='0' && s[i]<='9'){
            count++;
        }
    }

    char c_arr[count];
    int j=0;

    for(int i=0;i<n;i++){
        if(s[i]>='0' && s[i]<='9'){
            c_arr[j] = s[i];
            j++;
        }
    }

    start = create_tree(start,c_arr,0,count);

    print_tree(start);
}

int main(){
    string s;
    cin>>s;

    int count=0;

    count_input(s,count);
}