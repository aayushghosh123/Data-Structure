#include<bits/stdc++.h>
using namespace std;

void left_and_right(int arr[],int n,int k){
    int check=0;

    for(int i=0;i<n;i++){
        if(arr[i]==k && check != 1){
            cout<<i<<" ";
            check++;
        }

        if(arr[i]==k && arr[i+1] != k){
            cout<<i;
        }
    }
}

int main(){
    int n=0;
    cin>>n;

    int arr[n]={0};

    for(int i=0;i<n;i++)
    cin>>arr[i];

    int k=0;
    cin>>k;

    left_and_right(arr,n,k);
}