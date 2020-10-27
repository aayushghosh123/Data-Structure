#include<bits/stdc++.h>
using namespace std;

int main(){
    int n=0;
    cin>>n;

    int arr[n]={0};

    for(int i=0;i<n;i++)
    cin>>arr[i];

    int max=arr[0];

    for(int i=1;i<n;i++){
        if(arr[i]>max)
        max = arr[i];
    }

    int arr2[max+1]={0};

    for(int i=0;i<n;i++){
        arr2[arr[i]]++;
    }

    for(int i=0;i<max+1;i++){
        if(arr2[i]==1){
            cout<<i<<" ";
        }
    }    
}