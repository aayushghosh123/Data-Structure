#include<bits/stdc++.h>
using namespace std;

void all_permutation(string s,int l,int n){
    if(l==n){
        cout<<s<<endl;
    }
    else{
       for(int i=l;i<n;i++){
           swap(s[i],s[l]);
            all_permutation(s,l+1,n);
            swap(s[i],s[l]);
       }
    }
}

int main(){
    string s;

    cin>>s;

    int n = s.length();
    
    all_permutation(s,0,n);
}