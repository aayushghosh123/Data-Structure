#include<bits/stdc++.h>
using namespace std;

void search_in_a_matrix(int n,int m,int key){
     int arr[n][m]={0};

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(arr[i][j] == key){
                cout<<"Yes";
                exit(0);
            }
        }
    }

    cout<<"No";
}

int main(){
    int n=0;
    int m=0;

    cin>>n>>m;

    int key=0;
    cin>>key;

    search_in_a_matrix(n,m,key);
}