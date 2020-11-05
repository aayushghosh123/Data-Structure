#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    struct node *next = NULL;
}*start;

typedef struct node node;
struct node* XOR(struct node *a,struct node *b){
    return(struct node*)((uintptr_t)(a) ^ (uintptr_t)(b));
}

void getdata(int n){
    struct node *newdata,*last;
    int data;
    cin>>data;
    start = new struct node();
    start->data = data;
    //start->next = NULL;
    last = start;
    for(int i=1;i<n;i++)
    {
        newdata = new node();
        cin>>data;
        newdata->data = data;
        last->next = XOR(last->next,newdata);
        newdata->next=XOR(last,newdata->next);
        last = newdata;
    }
}

void showdata(){
    struct node *last = start;
    cout<<start->data<<" ";
    struct node *temp = start->next;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        struct node *temp2 = last;
        last = temp;
        temp=XOR(temp->next,temp2);
    }

}

int main(){
    int n;
    cin>>n;
    getdata(n);
    cout<<"The XOR linked list is :- "<<endl;
    showdata();
    }