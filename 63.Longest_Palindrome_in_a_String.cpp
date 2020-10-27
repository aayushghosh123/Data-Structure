#include<bits/stdc++.h>
using namespace std;

void longest_palindrome(string s,int n){
    if(n==1){
        cout<<s;
        exit(0);
    }
    else if(n==2 && s[0]==s[1]){
        cout<<s;
        exit(0);
    }
    else if(n==2 && s[0] != s[1]){
        cout<<s[0];
        exit(0);
    }
}

int main(){
    string s;

    cin>>s;

    int n = s.length();

    longest_palindrome(s,n);
}