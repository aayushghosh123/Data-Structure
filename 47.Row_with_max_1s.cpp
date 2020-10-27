#include<bits/stdc++.h>
using namespace std;

void row_with_max_1s(int n,int m){
    int mat[n][m];

    int arr[n]={0};
    
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>mat[i][j];
        }
    }

    int count=0;

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(mat[i][j]==1){
                count++;
            }
        }
        arr[i] = count;
        count=0;
    }

    int max_ele=arr[0];
    int pos=0;

    for(int i=1;i<n;i++){
        if(arr[i]>max_ele){
            max_ele = arr[i];
            pos = i;
        }
    }

    cout<<"Row "<<pos<<" contains "<<max_ele<<".";
}

int main(){
    int n=0,m=0;

    cin>>n>>m;

    row_with_max_1s(n,m);
}