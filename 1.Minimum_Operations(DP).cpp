#include<bits/stdc++.h>
using namespace std;

int minimum_operations(int n,int count){
    if(n==0)
    return count;
    else if(n%2==0){
        n = n/2;
        count++;
    }
    else if(n%2==1){
        n = n-1;
        count++;
    }

    return minimum_operations(n,count);
}

int main(){
    int n=0;
    cin>>n;

    int count=0;

    cout<<minimum_operations(n,count);
}