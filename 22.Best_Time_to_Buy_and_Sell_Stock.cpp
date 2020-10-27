#include<bits/stdc++.h>
using namespace std;

void buy_sell(int arr[],int n){
    int buy_day=0;
    int sell_day=0;
    int min=arr[0];

    for(int i=1;i<n;i++){
        if(arr[i]<min){
            buy_day = i+1;
            min = arr[i];
        }
    }

    if(buy_day == n){
        cout<<"0";
        exit(0);
    }

    int max=0;

    for(int i=buy_day;i<n;i++){
        if(min<arr[i] && max<arr[i]){
            max = arr[i];
            sell_day = i+1;
        }
    }

    cout<<min<<" "<<max<<endl;

    if(max > min){
        cout<<max-min;
    }
    else{
        cout<<"0";
    }
}

int main(){
    int n=0;
    cin>>n;

    int arr[n]={0};

    for(int i=0;i<n;i++)
    cin>>arr[i];

    buy_sell(arr,n);
}