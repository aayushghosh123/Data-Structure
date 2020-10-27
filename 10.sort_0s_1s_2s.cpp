#include<bits/stdc++.h>
using namespace std;

void sort_array(int arr[],int n){
    int z=0,f=0,t=0;

    for(int i=0;i<n;i++){
        if(arr[i]==1)
        f++;
        else if(arr[i]==0)
        z++;
        else if(arr[i]==2)
        t++;
    }

    for(int i=0;i<z;i++)
    arr[i]=0;

    for(int i=z;i<z+f;i++)
    arr[i]=1;

    for(int i=f+z;i<f+z+t;i++)
    arr[i]=2;

    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
}

int main(){
    int n=0;
    cin>>n;

    int arr[n]={0};

    for(int i=0;i<n;i++)
    cin>>arr[i];

    sort_array(arr,n);
}