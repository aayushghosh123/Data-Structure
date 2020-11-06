#include<bits/stdc++.h>
using namespace std;

void heapify(int arr[],int i,int n){
    int largest = i;
    int l = 2*i+1;
    int r = 2*i+2;

    if(l<n && arr[l]>arr[largest])
    largest = l;

    if(r<n && arr[r]>arr[largest])
    largest = r;

    if(largest != i){
        swap(arr[i],arr[largest]);
        heapify(arr,largest,n);
    }
}

void heapsort(int arr[],int n){
    for(int i=n/2-1;i>=0;i--){
        heapify(arr,i,n);
    }

    for(int i=n-1;i>0;i--){
        swap(arr[0],arr[i]);
        heapify(arr,0,i);
    }
    
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
}

int main(){
    int n=0;
    cin>>n;

    int arr[n]={0};

    for(int i=0;i<n;i++)
    cin>>arr[i];

    heapsort(arr,n);
}
