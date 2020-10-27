#include<bits/stdc++.h>
using namespace std;

void find_pair(int arr[],int k,int n){
    int i=0;
    int j = n-1;
    while(i<j){
        if(arr[i] + arr[j] == k){
            cout<<arr[i]<<" "<<arr[j]<<endl;
            i++;
            j--;
        }
        else if(arr[i] + arr[j] < k){
            i++;
        }
        else if(arr[i] + arr[j] > k){
            n--;
        }
    }
}

int main(){
    int n=0;
    cin>>n;

    int arr[n]={0};

    for(int i=0;i<n;i++)
    cin>>arr[i];

    int k=0;
    cin>>k;

    find_pair(arr,k,n);
}