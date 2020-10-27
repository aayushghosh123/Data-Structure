#include<bits/stdc++.h>
using namespace std;

int main(){
    int n=0;
    cin>>n;

    int arr[n]={0};

    for(int i=0;i<n;i++)
    cin>>arr[i];

    int k=0;
    cin>>k;

    sort(arr,arr+n);

    int ans = arr[n-1] - arr[0];

    int small = arr[0]+k;

    int big = arr[n-1]+k;

    if(small>big)
    swap(small,big);

    for(int i=1;i<n-1;i++){
    int subtract = arr[i]-k;
    int add = arr[i]+k;
    
    if(subtract >= small || add<= big)
    continue;

    if(big-small <= (add-subtract))
    small = subtract;
    else
    big = add;
    }

    cout<<min(ans,big-small);
}