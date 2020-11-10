#include<bits/stdc++.h>
using namespace std;

void find_zero_subarray_sum(int arr[],int n){
    unordered_map<int,int>m;

    int sum=0;
    int max_length=0;

    for(int i=0;i<n;i++){
        sum += arr[i];

        if(arr[i]==0 && max_length==0)
        max_length = 1;
        
        if(sum==0)
        max_length = i+1;

        if(m.find(sum) != m.end()){
            max_length = max(max_length,i - m[sum]);
        }
        else{
            m[sum] = i;
        }
    }
    cout<<max_length;
}

int main(){
    int n=0;
    cin>>n;

    int arr[n]={0};

    for(int i=0;i<n;i++)
    cin>>arr[i];

    find_zero_subarray_sum(arr,n);
}