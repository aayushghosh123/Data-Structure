#include<bits/stdc++.h>
using namespace std;

void kadane_algo(int arr[],int n){
    int max_sum = arr[0];
    int curr_sum = arr[0];

    for(int i=1;i<n;i++){
        curr_sum = max(arr[i],arr[i]+curr_sum);
        max_sum = max(curr_sum,max_sum);
    }

    cout<<max_sum;
}

int main(){
        int n=0;
        cin>>n;

        int arr[n]={0};
        

        for(int i=0;i<n;i++)
        cin>>arr[i];

        kadane_algo(arr,n);
}