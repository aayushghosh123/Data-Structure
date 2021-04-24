#include<bits/stdc++.h>
using namespace std;

struct node{
        int data;
        struct node *next;

        node(){
            data = 0;
            next = NULL;
        }
};

struct node *start;

node *XOR(node *a,node *b){
    return (node*)((uintptr_t)(a)^(uintptr_t)(b));
}

void getdata(int n){
    int data=0;
    cin>>data;

    start = new node();
    start->data = data;
    node *last = start;

    for(int i=2;i<=n;i++){
        node *newdata = new node();
        cin>>data;
        newdata->data = data;
        last->next = XOR(last->next,newdata);
        newdata->next = XOR(last,newdata->next);
        last = newdata;
    }
}

void showdata(){
   node *curr = start;
   node *before = NULL;
   node *next;

   while(curr != NULL){
       cout<<curr->data<<" ";
       next = XOR(before,curr->next);
       before = curr;
       curr = next;
   }
}

int main(){
    int n=0;
    cin>>n;

    getdata(n);

    showdata();
}