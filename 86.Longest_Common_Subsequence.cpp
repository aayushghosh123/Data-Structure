#include<bits/stdc++.h>
using namespace std;

void lcs(string s1,string s2,int n,int m){
    int arr[n+1][m+1];

    for(int i=0;i<n+1;i++){
        for(int j=0;j<m+1;j++){
            if(i==0 || j==0)
            arr[i][j]=0;
            else if(s1[i] == s2[j]){
                arr[i][j] = arr[i-1][j-1] +1;
            }
            else{
                arr[i][j] = max(arr[i-1][j],arr[i][j-1]);
            }
        }
    }
    //cout<<endl;
    cout<<arr[n][m];
}

int main(){
    string s1;
    cin>>s1;

    string s2;
    cin>>s2;

    int n = s1.length();
    int m = s2.length();

    lcs(s1,s2,n,m);
}