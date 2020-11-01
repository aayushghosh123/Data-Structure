#include<bits/stdc++.h>
using namespace std;

void largest_area(int arr[],int n){
    stack<int>s;

    int tp=0,area_with_top=0;
    int max_area=0;

    int i=0;

    for(i=0;i<n;i++){
        if(s.empty()==true || arr[i]>arr[s.top()]){
            s.push(i);
        }
        else{
            tp = s.top();
            s.pop();

            area_with_top = arr[tp]*(s.empty()?i:i-s.top()-1);

            if(max_area<area_with_top)
            max_area = area_with_top;
        }
    }

    while(s.empty()==false){
        tp = s.top();
        s.pop();

        area_with_top = arr[tp]*(s.empty()?i:i-s.top()-1);

        if(max_area<area_with_top)
        max_area = area_with_top;
    }

    cout<<max_area;
}

int main(){
    int n=0;
    cin>>n;

    int arr[n]={0};

    for(int i=0;i<n;i++)
    cin>>arr[i];

    largest_area(arr,n);
}