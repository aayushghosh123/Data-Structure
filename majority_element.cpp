#include<bits/stdc++.h>
using namespace std;

void majority_element(int arr[],int n){
    unordered_map<int,int>m1;

    sort(arr,arr+n);

    for(int i=0;i<n;i++)
    m1[arr[i]]++;

    unordered_map<int,int>::iterator it;

    for(it = m1.begin();it != m1.end(); it++){
        if(n/2<it->second)
        cout<<it->first<<" ";
    }
}

int main(){
    int n=0;
    cin>>n;

    int arr[n]={0};

    for(int i=0;i<n;i++)
    cin>>arr[i];

    majority_element(arr,n);
}