#include<bits/stdc++.h>
using namespace std;

void merge_two_array(int arr[],int n,int arr2[],int m){

    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";

    cout<<endl;

    for(int i=0;i<m;i++)
    cout<<arr2[i]<<" ";
    cout<<endl;
    
    while(arr2[0]<arr[n-1]){

        int temp = arr[n-1];

        for(int i = n-2;i>=0;i--){
            arr[i+1] = arr[i];
        }

        for(int i=0;i<m-1;i++){
            arr2[i] = arr2[i+1];
        }

        arr2[m-1] = temp;
    }

    sort(arr,arr+n);
    sort(arr2,arr2+m);

    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";

    cout<<endl;

    for(int i=0;i<m;i++)
    cout<<arr2[i]<<" ";
}

int main(){
    int n=0,m=0;

    cin>>n>>m;

    int arr[n]={0};
    int arr2[n]={0};

    for(int i=0;i<n;i++)
    cin>>arr[i];

    for(int i=0;i<m;i++)
    cin>>arr2[i];

    merge_two_array(arr,n,arr2,m);
}