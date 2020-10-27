#include<bits/stdc++.h>
using namespace std;

void find_missing(int arr[],int n){
    int max = 0;

    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }

    int arr2[max+1]={0};

    for(int i=0;i<n;i++){
        arr2[arr[i]]++;
    }

    // for(int i=1;i<max+1;i++){
    //     cout<<arr2[i]<<" ";
    // }

    // cout<<endl;

    for(int i=1;i<max+1;i++){
        if(arr2[i]>1){
            cout<<i<<" ";
            break;
        }
    }

    for(int i=1;i<max+1;i++){
        if(arr2[i]==0){
            cout<<i;
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

    find_missing(arr,n);
}