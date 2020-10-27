#include<bits/stdc++.h>
using namespace std;

struct interval{
    int s,e;
};

bool mycomp(interval a,interval b){
    { return a.s < b.s; }
}

void mergeinterval(interval arr[],int n){
    sort(arr,arr+n,mycomp);

    int index = 0;

    for (int i=1; i<n; i++) 
    {
        if (arr[index].e >=  arr[i].s) 
        {
            arr[index].e = max(arr[index].e, arr[i].e); 
            arr[index].s = min(arr[index].s, arr[i].s); 
        } 
        else {
            index++;
            arr[index] = arr[i]; 
        }    
    }
    cout << "\n The Merged Intervals are: "; 
    for (int i = 0; i <= index; i++) 
        cout << "[" << arr[i].s << ", " << arr[i].e << "] "; 

}

int main(){
    interval arr[]={{1,2},{1,9},{2,4},{4,7}};
    int n = sizeof(arr)/sizeof(arr[0]);
    mergeinterval(arr,n);
}