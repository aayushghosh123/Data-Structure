#include<bits/stdc++.h>
using namespace std;

void pair_difference(int arr[],int n){
    int min_val=0,max_val=0;
    int min_index=0,max_index=0;

    for(int i=0;i<n;i++){
        if(arr[i]>max_val){
            max_val = arr[i];
            max_index = i;
        }
        
        if(arr[i]<min_val){
            min_val = arr[i];
            min_index = i;
        }
    }

    cout<<abs(max_val-min_val)+abs(max_index-min_index);
}

int main(){
    int n=0;
    cin>>n;

    int arr[n]={0};

    for(int i=0;i<n;i++)
    cin>>arr[i];

    pair_difference(arr,n);
}