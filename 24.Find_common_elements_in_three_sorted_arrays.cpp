#include<bits/stdc++.h>
using namespace std;

void find_common_element(int arr1[],int arr2[],int arr3[],int n,int m,int x){
    int i=0,j=0,k=0;

    while(i<n && j<m && k<x){
        if(arr1[i]==arr2[j] && arr2[j]==arr3[k]){
            cout<<arr1[i]<<" ";
            i++;
            j++;
            k++;
        }
        else if(arr1[i]<arr2[j]){
            i++;
        }
        else if(arr2[j]<arr3[k]){
            j++;
        }
        else{
            k++;
        }
    }
}

int main(){
    int n=0,m=0,x=0;

    cin>>n>>m>>x;

    int arr1[n]={0},arr2[m]={0},arr3[x]={0};

    for(int i=0;i<n;i++)
    cin>>arr1[i];

    for(int i=0;i<m;i++)
    cin>>arr2[i];

    for(int i=0;i<x;i++)
    cin>>arr3[i];

    find_common_element(arr1,arr2,arr3,n,m,x);
}