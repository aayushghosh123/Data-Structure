#include<bits/stdc++.h>
using namespace std;

void reverse_array(int arr[],int n){
    for(int i=0;i<n/2;i++){
        swap(arr[i],arr[n-1-i]);
    }

    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
}

int main(){
    int n=0;
    cin>>n;

    int arr[n]={0};

    for(int i=0;i<n;i++)
    cin>>arr[i];

    reverse_array(arr,n);
}