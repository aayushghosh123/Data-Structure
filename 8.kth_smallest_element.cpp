#include<bits/stdc++.h>
using namespace std;

int main(){
    int n=0;
    cin>>n;

    int arr[n]={0};

    for(int i=0;i<n;i++)
    cin>>arr[i];

    int k=0;
    cin>>k;

    sort(arr,arr+n);

    cout<<arr[k-1];
}