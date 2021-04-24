#include<bits/stdc++.h>
using namespace std;

int find_gcd(int k,int n){
    if(n==k)
    return 0;

    else
    return find_gcd(n,k%n);
}

void rotate_array(int arr[],int n,int k){
    int gcd = find_gcd(k,n);

    for(int i=0;i<gcd;i++){
        int temp = arr[i];
        int j = i;

        while(1){
            int d = k+j;

            if(d>=n)
            d = d-n;

            if(d==i)
            return;

            arr[j] = arr[d];
            j = d;
        }
        arr[j] = temp;
    }

    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
}

int main(){
    int n=0;
    cin>>n;

    int arr[n]={0};

    for(int i=0;i<n;i++)
    cin>>arr[i];

    int k=0;
    cin>>k;

    rotate_array(arr,n,k);
}