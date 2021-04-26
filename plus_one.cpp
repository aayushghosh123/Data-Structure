#include<bits/stdc++.h>
using namespace std;

void plus_one(int arr[],int n){
    int sum=0;
    for(int i=0;i<n;i++){
        if(i>=1){
            sum = sum * 10;
        }
        sum = sum + arr[i];
    }

    sum = sum + 1;

    cout<<sum;
}

int main(){
    int n=0;
    cin>>n;

    int arr[n]={0};

    for(int i=0;i<n;i++)
    cin>>arr[i];

    plus_one(arr,n);
}