#include<bits/stdc++.h>
using namespace std;

void subset_sum(int arr[],int n){
    int sum=0;

    unordered_set<int>ss;

    for(int i=0;i<n;i++){
        sum = sum + arr[i];

        if(sum==0 || ss.find(sum) != ss.end()){
            cout<<"Subarray sum is 0";
            exit(0);
        }
        else{
            ss.insert(sum);
        }
    }

    cout<<"No subarray sum is 0";
}

int main(){
    int n=0;
    cin>>n;

    int arr[n]={0};

    for(int i=0;i<n;i++)
    cin>>arr[i];

    subset_sum(arr,n);
}