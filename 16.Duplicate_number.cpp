#include<bits/stdc++.h>
using namespace std;

void find_duplicate(int arr[],int n){
    sort(arr,arr+n);

    for(int i=0;i<n-1;i++){
        if(arr[i]==arr[i+1]){
            cout<<arr[i];
            exit(0);
        }
    }

    cout<<"No Duplicate";
}

int main(){
    int n=0;
    cin>>n;

    int arr[n]={0};

    for(int i=0;i<n;i++)
    cin>>arr[i];

    find_duplicate(arr,n);
}