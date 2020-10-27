#include<bits/stdc++.h>
using namespace std;

void median_of_a_matrix(int n,int m){
    int arr[n][m]={0};

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }

    int arr1[n*m]={0};

    int k=0;

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            arr1[k++] = arr[j][i];
        }
    }

    int mid = (n*m)/2;

    cout<<arr1[mid];
}

int main(){
    int n=0,m=0;

    cin>>n>>m;
    
    median_of_a_matrix(n,m);
}