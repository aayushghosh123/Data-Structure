#include<bits/stdc++.h>
using namespace std;

void spiral_print(int n,int m){

    int arr[n][m];

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    int k=0,l=0;

    while(l<n && k<m){
        for(int i=l;i<m;i++){
            cout<<arr[l][i]<<" ";
        }
        k++;

        for(int i=k;i<n;i++){
            cout<<arr[i][n-1]<<" ";
        }
        m--;

        if(k<n){
            for(int i=m-1;i>=l;--i){
                cout<<arr[n-1][i]<<" ";
            }
            n--;
        }

        if(l<m){
            for(int i=n-1;i>=k;--i){
                cout<<arr[i][l]<<" ";
            }
            l++;
        }
    }
}

int main(){
    int n=0,m=0;

    cin>>n>>m;

    spiral_print(n,m);
}