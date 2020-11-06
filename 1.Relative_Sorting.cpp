#include<bits/stdc++.h>
using namespace std;

void relative_sort(int arr[],int n,int arr2[],int m){
    unordered_map<int,int>m1;

    for(int i=0;i<n;i++){
        m1[arr[i]]++;
    }

    int i=0,j=0;

    unordered_map<int,int>::iterator it;

    while(i<m){
        for(it=m1.begin();it!=m1.end();it++){
            if(arr[i] == it->first){
                for(int k=0;k<it->second;k++){
                    arr[j++] = it->first;
                }
                m1.erase(arr[i]);
            }
            break;
        }
        i++;
    }

    for(it=m1.begin();it!=m1.end();it++){
        for(int k=0;k<it->second;k++){
            arr[j++] = it->first;
        }
    m1.erase(it->first);
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

    int m=0;
    cin>>m;

    int arr2[m]={0};

    for(int i=0;i<m;i++)
    cin>>arr2[i];

    relative_sort(arr,n,arr2,m);
}