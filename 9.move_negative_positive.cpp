#include<bits/stdc++.h>
using namespace std;

void move_number(int arr[],int n){
    int j=0;
    for(int i=0;i<n;i++){
        if(arr[i]<0 && i != j){
            swap(arr[i],arr[j]);
            j++;
        }
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

    move_number(arr,n);
}