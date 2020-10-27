#include<bits/stdc++.h>
using namespace std;

int main(){
    int n=0;
    cin>>n;

    bool arr[n+1]={0};

    for(int i=1;i<n+1;i++){
        if(i*i < n+1)
        arr[i*i] = true;
    }

    int c=0;

    for(int i=1;i<n+1;i++){
        if(arr[i] == true){
            c++;
        }
    }

    cout<<c;
}