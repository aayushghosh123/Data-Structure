#include<bits/stdc++.h>
using namespace std;

void set_bits(string s,int n){
    int size=n;
    
    while(n>0){
        char x = n%2 + '0';
        s = s + x;
        n = n/2;
    }

    // cout<<s<<endl;

    // for(int i=0;i<size/2;i++){
    //     char x = s[i];
    //     s[i] = s[n-1-i];
    //     s[n-1-i] = x;
    // }

    // cout<<s<<endl;

    size=0;

    for(int i=0;i<s.length();i++){
        if(s[i]=='1'){
            size++;
        }
    }
    cout<<size;
}

int main(){
    int n=0;
    cin>>n;

    string s;

    set_bits(s,n);
}