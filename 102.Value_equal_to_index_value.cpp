#include<bits/stdc++.h>
using namespace std;

void equal_index_value(int arr[],int n){
    for(int i=0;i<n;i++){
        if(arr[i] == i+1){
            cout<<arr[i]<<" ";
        }
    }
}

int main(){
    int n=0;
    cin>>n;

    int arr[n]={0};

    for(int i=0;i<n;i++)
    cin>>arr[i];

    equal_index_value(arr,n);
}