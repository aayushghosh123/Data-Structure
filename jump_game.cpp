#include<bits/stdc++.h>
using namespace std;

void jump_game(int arr[],int n){
    int count=0;
    int i=0;

    while(i<n){
        if(arr[i]==0){
            cout<<"You can't reach at the end of the array";
            exit(0);
        }
        else{
            i = i + arr[i];
            count++;
        }
    }

    cout<<count;
}

int main(){
    int n=0;
    cin>>n;

    int arr[n]={0};

    for(int i=0;i<n;i++)
    cin>>arr[i];

    jump_game(arr,n);
}