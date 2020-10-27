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

        struct node *temp  = start;
        struct node *newdata;
        for(int i=1;i<n;i++){
            cin>>data;
            newdata = new node();
            newdata->data = data;
            newdata->next = NULL;
            temp->next = newdata;
            temp = temp->next;
        }
    node *end = temp;
    temp = start;

    int pos=0;
    cin>>pos;
    pos = pos-1;
    while(pos--){
        temp = temp->next;
    }

    end->next = temp;
}

void print_loop(node* start){
    if(start==NULL || start->next==NULL){
        cout<<"Can't be possible";
        exit(0);
    }else{
        node *slow = start;
        node *fast = start->next;

        while(slow != fast){
            if(fast->next == NULL || fast->next->next==NULL){
                cout<<"Can't be possible";
                exit(0);
            }else{
                slow = slow->next;
                fast = fast->next->next;
            }
        }
        cout<<slow->data;
    }
}

int main(){
    int n=0;
    cin>>n;

    getdata(n);

    print_loop(start);
}