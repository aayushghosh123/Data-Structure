#include<bits/stdc++.h>
using namespace std;

bool binary_search(int arr[],int i,int n,int key){
    if(n>=i){
    int mid = i + (n-i)/2;
    if(arr[mid] == key){
        return true;
    }
    else if(arr[mid]>key){
    return binary_search(arr,i,mid-1,key);
    }
    else if(arr[mid]<key){
    return binary_search(arr,mid+1,n,key);
    }
    }
    return false;
}

void find_arr_subset(int arr[],int n,int arr2[],int m){
    for(int i=0;i<m;i++){
       bool x =  binary_search(arr,0,n-1,arr2[i]);

       if(x==1)
       continue;
       else{
           cout<<"Not Possible";
           exit(0);
       }
    }

    cout<<"Yes";
}

int main(){
    int n=0;
    cin>>n;

    int arr[n]={0};

    int m=0;
    cin>>m;

    int arr2[m]={0};

    for(int i=0;i<n;i++)
    cin>>arr[i];

    for(int i=0;i<m;i++)
    cin>>arr2[i];

    sort(arr,arr+n);

    find_arr_subset(arr,n,arr2,m);
}