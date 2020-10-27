#include<bits/stdc++.h>
using namespace std;

void search_in_rotated(int arr[],int l,int h,int key){
    if(l>h){
        cout<<"Not Possible";
        exit(0);
    }

    int mid = (l+h)/2;

    if(arr[mid] == key){
        cout<<mid;
        exit(0);
    }

    if(arr[l] <= arr[mid]){
        if(key >= arr[l] && key<= arr[mid])
        search_in_rotated(arr,l,mid-1,key);

        search_in_rotated(arr,mid+1,h,key);
    }

    if(key>= arr[mid+1] && key<=arr[h])
    search_in_rotated(arr,mid+1,h,key);

    search_in_rotated(arr,l,mid-1,key);
}

int main(){
    int n=0;
    cin>>n;

    int arr[n]={0};

    for(int i=0;i<n;i++)
    cin>>arr[i];

    int key=0;
    cin>>key;

    search_in_rotated(arr,0,n-1,key);    
}