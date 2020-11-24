#include<bits/stdc++.h>
using namespace std;

int linear_search(int arr[],int n,int k){
    for(int i=0;i<n;i++){
        if(arr[i]==k)
        return i;
    }
    return -1;
}

int main(){
    int n=0;
    cin>>n;

    int arr[n]={0};

    for(int i=0;i<n;i++)
    cin>>arr[i];

    int k=0;
    cin>>k;

    cout<<linear_search(arr,n,k);    
}