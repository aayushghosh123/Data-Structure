#include<bits/stdc++.h>
using namespace std;

void first_last(int arr[],int n,int x){
    int f_pos=0;
    int l_pos=0;

    int c=0;

    for(int i=0;i<n;i++){
        if(arr[i]==x && c==0){
            f_pos = i;
            l_pos = i;
            c++;
        }
        else if(arr[i]==x && c>=1){
            l_pos = i;
        }
    }

    cout<<f_pos<<" "<<l_pos;
}

int main(){
    int n=0;
    cin>>n;

    int arr[n]={0};

    for(int i=0;i<n;i++)
    cin>>arr[i];

    int x=0;
    cin>>x;

    int pos=0;

    first_last(arr,n,x);
}