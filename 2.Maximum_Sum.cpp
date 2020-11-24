#include<bits/stdc++.h>
using namespace std;

void get_max_sum(int arr[],int n){
    int max_sum=arr[0],curr_sum=arr[0];
    int count=1;

    for(int i=1;i<n;i++){
        curr_sum = max(curr_sum+arr[i],max(arr[i],curr_sum));
        if(curr_sum>max_sum)
        count++;
        max_sum = max(max_sum,curr_sum);
    }
    cout<<max_sum<<" "<<count;
}

int main(){
    int n=0;
    cin>>n;

    int arr[n]={0};

    for(int i=0;i<n;i++)
    cin>>arr[i];

    get_max_sum(arr,n);
}