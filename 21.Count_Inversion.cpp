#include<bits/stdc++.h>
using namespace std;

void count_inversion(int arr[],int n){
    int count=0;

    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j])
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

    count_inversion(arr,n);
}