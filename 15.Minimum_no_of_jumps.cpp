#include<bits/stdc++.h>
using namespace std;

void minimum_no_jumps(int arr[],int n){
    int jumps=0;

    int i=0;

    if(i==n){
    cout<<"0";
    exit(0);
    }

    int m = n;
    int j=0;

    while(i<n){
        if(arr[i]<m-1){
            j = j + arr[i];
            jumps++;
            m = m-j;
            i = j;
        }
        else if(arr[i]>=m-1){
            jumps++;
            cout<<jumps;
            exit(0);
        }
    }
}

int main(){
    int n=0;
    cin>>n;

    int arr[n]={0};

    for(int i=0;i<n;i++)
    cin>>arr[i];

    minimum_no_jumps(arr,n);
}