#include<bits/stdc++.h>
using namespace std;

void max_product(int arr[],int n){
    int max_ele=1;
    int min_ele=1;
    int final_max=1;
    int flag=0;

    for(int i=0;i<n;i++){
        if(arr[i]>0){
            max_ele = max_ele*arr[i];
            min_ele = min(min_ele*arr[i],1);
            flag=1;
        }
        else if(arr[i]==0){
            min_ele = 1;
            max_ele = 1;
        }
        else{
            int temp = max_ele;
            max_ele = max(min_ele*arr[i],1);
            min_ele = temp*arr[i];
        }


        if(max_ele>final_max)
        final_max = max_ele;
    }

    if(flag==0 && final_max==1)
    cout<<"0";
    else
    cout<<final_max;
}

int main(){
    int n=0;
    cin>>n;

    int arr[n]={0};

    for(int i=0;i<n;i++)
    cin>>arr[i];

    max_product(arr,n);
}