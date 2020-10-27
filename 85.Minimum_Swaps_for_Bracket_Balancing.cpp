#include<bits/stdc++.h>
using namespace std;

void minimum_swaps(string s,int n){
    stack<char>ss;

    for(int i=0;i<n;i++){
        if(s[i]==']' && ss.top()=='['){
            ss.pop();
        }
        else if(s[i]==']' || s[i]=='['){
            ss.push(s[i]);
        }
    }

    int length=0;

    while(ss.empty()==false){
        length++;
        ss.pop();
    }

    cout<<length;
}

int main(){
    string s;

    cin>>s;

    int n = s.length();

    minimum_swaps(s,n);
}