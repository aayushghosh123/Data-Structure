#include<bits/stdc++.h>
using namespace std;

void kth_element(int arr[],int arr2[],int n,int m,int k){
    int i=n-1,j=0;

    while(arr[i]>arr2[j]){
        swap(arr[i],arr2[j]);
        i--;
        j++;
    }

    sort(arr,arr+n);
    sort(arr2,arr2+m);

    if(n>k){
        cout<<arr[k];
    }
    else{
        cout<<arr2[m-k-1];
    }
}

int main(){
    int n=0,m=0;

    cin>>n>>m;

    int arr[n]={0};
    int arr2[m]={0};

    for(int i=0;i<n;i++)
    cin>>arr[i];

    for(int i=0;i<m;i++)
    cin>>arr2[i];

    int k=0;
    cin>>k;

    kth_element(arr,arr2,n,m,k);
}