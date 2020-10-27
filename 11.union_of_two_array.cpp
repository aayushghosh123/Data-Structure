#include<bits/stdc++.h>
using namespace std;

void union_array(int arr[],int n,int arr2[],int m){
    int i=0,j=0;

    while(i<n && j<m){
        if(arr[i]<arr2[j]){
            cout<<arr[i]<<" ";
            i++;
        }
        else if(arr[i]>arr2[j]){
            cout<<arr2[j]<<" ";
            j++;
        }
        else if(arr[i] == arr2[j]){
            cout<<arr[i]<<" ";
            i++;
            j++;
        }
    }

    while(i<n){
        cout<<arr[i]<<" ";
        i++;
    }

    while(j<m){
        cout<<arr2[j]<<" ";
        j++;
    }
}

int main(){
    int n=0;
    cin>>n;

    int arr[n]={0};

    for(int i=0;i<n;i++)
    cin>>arr[i];

    int m=0;
    cin>>m;

    int arr2[m]={0};

    for(int i=0;i<m;i++)
    cin>>arr[i];


    union_array(arr,n,arr2,m);
}