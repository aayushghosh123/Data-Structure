/*
Given an integer list where each number represents the number of hops 
you can make, determine whether you can reach to the last index 
starting at index 0.

For example, [2, 0, 1, 0] returns True while [1, 1, 0, 1] returns False.
*/


#include<bits/stdc++.h>
using namespace std;

bool can_you_reach_last(int arr[],int n){
    int i=0;

    while(i<n){
        if(arr[i]==0)
        return false;

        i = i + arr[i];

        if(i == n-1)
        return true;
    }
    return true;
}

int main(){
    int n=0;
    cin>>n;

    int arr[n]={0};

    for(int i=0;i<n;i++)
    cin>>arr[i];

    cout<<can_you_reach_last(arr,n);
}