#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    struct node *next;
    node(){
        data=0;
        next = NULL;
    }
};

struct node *start =NULL;

void getdata(int n){
    int data=0;
    start = new node();
    cin>>data;
    start->data = data;
    start->next = NULL;

    node *temp = start;
    node *newdata;

    for(int i=1;i<n;i++){
        newdata = new node();
        cin>>data;
        newdata->data = data;
        newdata->next = NULL;
        temp->next = newdata;
        temp = temp->next;
    }
}

void check_palindrome(node *temp,node *temp2){
    while(temp2 != NULL){
        if(temp->data == temp2->data){
            temp = temp->next;
            temp2 = temp2->next;
        }
        else{
            cout<<"Not a palindrome";
            exit(0);
        }
    }

    cout<<"It's a palindrome";
}

void find_mid_node(node *start,int mid){
    node *temp = start;
    node *temp2 = start;

    while(mid--){
        temp2 = temp2->next;
    }

    temp2 = temp2->next;
    
    check_palindrome(temp,temp2);
}

int main(){
    int n=0;
    cin>>n;

    getdata(n);

    int mid = n/2;

    find_mid_node(start,mid);
}