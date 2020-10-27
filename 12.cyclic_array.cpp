#include<bits/stdc++.h>
using namespace std;

void rotate_array(int arr[],int n){
    int temp = arr[n-1];

    for(int i=n-2;i>=0;i--){
        arr[i+1] = arr[i];
    }

    arr[0] = temp;

    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
}

int main(){
    int n=0;
    cin>>n;

    int arr[n]={0};


    for(int i=0;i<n;i++)
    cin>>arr[i];

    rotate_array(arr,n);

}