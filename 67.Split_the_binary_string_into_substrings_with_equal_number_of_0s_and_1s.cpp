#include<bits/stdc++.h>
using namespace std;

void count_substring(string s,int n){
    
    int z_count=0,o_count=0;
    int t_count=0;
    for(int i=0;i<n;i++){
        if(s[i]=='1')
        o_count++;
        else if(s[i]=='0')
        z_count++;
        
        if(z_count == o_count){
            t_count++;
        }
    }

    cout<<t_count;
}

int main(){
    string s;

    cin>>s;

    int n = s.length();

    count_substring(s,n);
}