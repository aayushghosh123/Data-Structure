#include<bits/stdc++.h>
using namespace std;

void majority_element(int arr[],int n){
    unordered_map<int,int>m1;

    for(int i=0;i<n;i++){
        m1[arr[i]]++;
    }

    int check=0;

    unordered_map<int,int>::iterator i;

    for(i=m1.begin();i!=m1.end();i++){
        if(i->second > n/2){
            cout<<i->first<<" ";
            check++;
        }
    }

    if(check<=0){
        cout<<"-1";
        exit(0);
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