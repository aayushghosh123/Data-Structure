#include<bits/stdc++.h>
using namespace std;

void rearrange_array(int arr[],int n){
    int j=0;

    for(int i=0;i<n;i++){
        if(arr[i]<0){
            if(i != j){
                swap(arr[i],arr[j]);
                j++;
            }
        }
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    int i=0;
    j=n-2;

    while(i<n/2 && j>0){
        swap(arr[i],arr[j]);
        i= i+1;
        j = j-2;
    }

    cout<<endl;
    
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int n=0;
    cin>>n;

    int arr[n]={0};

    for(int i=0;i<n;i++)
    cin>>arr[i];

    rearrange_array(arr,n);
}