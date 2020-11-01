#include<bits/stdc++.h>
using namespace std;

void check_arithmetic(string s,int n,stack<char>ss){
    string x;
    for(int i=0;i<n;i++){
        if(s[i]>='A' && s[i]<='Z'){
            x += s[i];
        }
        else if(s[i]=='-' || s[i]=='*' || s[i]=='/' || s[i]=='+'){
            ss.push(s[i]);
        }
        else if(s[i]==')' || s[i]==']' || s[i]=='}'){
            char y = ss.top();
            ss.pop();
            x += y;

            if(ss.empty()==false){
            y = ss.top();
            ss.pop();
            x += y;
            }
        }
    }

    while(ss.empty()==false){
        char y = ss.top();
        ss.pop();
        x += y;
    }

    cout<<x;
}

int main(){
    string s;
    cin>>s;

    int n = s.length();

    stack<char>ss;

    check_arithmetic(s,n,ss);
}