#include<bits/stdc++.h>
using namespace std;

void max_min_element(int arr[],int n){
    int min_ele = arr[0];
    int max_ele = arr[0];

    for(int i=1;i<n;i++){
        if(arr[i]<min_ele){
            min_ele = arr[i];
        }
        else if(arr[i]>max_ele){
            max_ele = arr[i];
        }
    }

    cout<<min_ele<<" "<<max_ele;
}

int main(){
    int n=0;
    cin>>n;

    int arr[n]={0};

    for(int i=0;i<n;i++)
    cin>>arr[i];

    max_min_element(arr,n);
}