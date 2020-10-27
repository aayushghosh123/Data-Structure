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

    struct node *temp = start;
    struct node *newdata;

    for(int i=1;i<n;i++){
        newdata = new node();
        cin>>data;
        newdata->data = data;
        newdata->next = NULL;
        temp->next = newdata;
        temp = temp->next;
    }
}

void add_1_to_number(node *start){
    int c=0;

    node *temp = start;

    int sum=0;

    while(temp != NULL){
        if(c>=1){
            sum = sum*10;
        }
        sum = sum + temp->data;
        temp = temp->next;
        c++;
    }

    sum = sum +1;

    cout<<sum;
}

int main(){
    int n=0;
    cin>>n;

    getdata(n);

    add_1_to_number(start);
}