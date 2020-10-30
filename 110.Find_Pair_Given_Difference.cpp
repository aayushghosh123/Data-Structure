#include<bits/stdc++.h>
using namespace std;

void find_difference(int arr[],int n,int k){
    int i=0;

    while(i<=n){
        if(arr[n] - arr[i] == k){
            cout<<"1";
            exit(0);
        }
        else if(arr[n]-arr[i]<k){
            i++;
        }
        else{
            n--;
        }
    }

    cout<<"-1";
}

int main(){
    int n=0;
    cin>>n;

    int arr[n]={0};

    for(int i=0;i<n;i++)
    cin>>arr[i];

    sort(arr,arr+n);

    int k=0;
    cin>>k;

    find_difference(arr,n-1,k);
}