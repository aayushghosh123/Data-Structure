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

struct node *start = NULL;

void insert_data(int data){
    if(start==NULL){
        start = new node();
        start->data = data;
        start->next = NULL;
    }
    else{
        node *newdata = new node();
        newdata->data = data;
        if(newdata->data > start->data){
            int x = start->data;
            start->data = newdata->data;
            newdata->data = x;
        }
        newdata->next = start;
        start = newdata;
    }
}

void delete_top(){
    node *temp = start;
    start = start->next;
    temp->next = NULL;
    free(temp);
}

void print_top(){
    cout<<start->data<<endl;
}

void get_min(){
    cout<<start->data<<endl;
}

int main(){
    int c=0;
    int data=0;

    do{
        cout<<"1.Push()"<<endl;
        cout<<"2.Pop()"<<endl;
        cout<<"3.Top()"<<endl;
        cout<<"4.Get Minimum"<<endl;
        cout<<"5.Exit"<<endl;
        cin>>c;
        switch(c){
            case 1:
                    cout<<"Pushing data in Stack :- "<<endl;
                    cin>>data;
                    insert_data(data);
                    break;
            case 2: cout<<"Poping data in Stack :- "<<endl;
                    delete_top();
                    break;
            case 3: cout<<"Printing top data in Stack :- "<<endl;
                    print_top();
                    break;
            case 4: cout<<"Get Minimum :- "<<endl;
                    get_min();
                    break;
        }
    }while(c!=5);
}