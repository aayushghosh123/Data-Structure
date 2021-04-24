#include<bits/stdc++.h>
using namespace std;

void longest_subsequence(int arr[],int n){
    sort(arr,arr+n);

    // for(int i=0;i<n;i++)
    // cout<<arr[i]<<" ";
    // cout<<endl;

    int x =  arr[0];
    int count=0;
    int max_count=0;
    for(int i=0;i<n;i++){
        if(arr[i]==x){
            count++;
            x++;
        }
        else{
            x = arr[i];
            i = i-1;
            if(max_count<count)
            max_count = count;
            count=0;
        }
    }

    if(max_count<count)
    max_count = count;

    if(max_count==1)
    cout<<"0";
    else
    cout<<max_count;
}

int main(){
    int n=0;
    cin>>n;

    int arr[n]={0};

    for(int i=0;i<n;i++)
    cin>>arr[i];

    longest_subsequence(arr,n);
}