#include<bits/stdc++.h>
using namespace std;

class Pair{
    public:
    int a;
    int b;
};

int maxchainlength(Pair arr[],int n){
    int i,j,max_ele=0;
    int *mat = new int[sizeof(int)*n]; 

    for(i=0;i<n;i++)
    mat[i] = 1;

    for(int i=1;i<n;i++){
        for(int j=0;j<i;j++){
            if(arr[i].a > arr[i].b && mat[i]<mat[j]+1)
            mat[i] = mat[j] + 1;
        }
    }

    for(int i=0;i<n;i++)
    if(mat[i]>max_ele)
    max_ele = mat[i];

    return max_ele;
}

int main(){
    int n=0;
    cin>>n;

    Pair arr[ ]={{5,24},{15,25},{27,40},{50,60}};

    int n = sizeof(arr)/sizeof(arr[0]);

    cout<<maxchainlength(arr,n);
}