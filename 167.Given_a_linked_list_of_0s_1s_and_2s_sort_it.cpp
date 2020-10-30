#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    struct node *next;

    node(){
        data=0;
        next=NULL;
    }
};

struct node *start=NULL;

void getdata(int n){
    int data=0;
    start = new node();
    cin>>data;
    start->data = data;
    start->next = NULL;

    node *temp = start;
    node *newdata;
    for(int i=1;i<n;i++){
        cin>>data;
        newdata->data = data;
        newdata->next = NULL;
        temp->next = newdata;
        temp = temp->next;
    }
}

void count_integer(node *start){
    int f=0,s=0,z=0;

    node *temp = start;
    
    while(temp != NULL){
        if(temp->data == 0){
            z++;
        }
        else if(temp->data==1){
            f++;
        }
        else{
            s++;
        }
        temp = temp->next;
    }

    temp = start;
    while(z--){
        temp->data = 0;
        temp = temp->next;
    }

    cout<<temp->data<<endl;

    while(f--){
        temp->data = 1;
        temp = temp->next;
    }

    cout<<temp->data<<endl;

    while(s--){
        temp->data = 2;
        temp = temp->next;
    }

    cout<<temp->data<<endl;

    temp = start;

    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}

int main(){
    int n=0;
    cin>>n;

    getdata(n);

    count_integer(start);
}