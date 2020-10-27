#include<bits/stdc++.h>
using namespace std;

void reverse_a_string(string s){
    stack<char>ss;

    int i=0;

    while(s[i] != '\0'){
        ss.push(s[i]);
        i++;
    }

    while(ss.empty()==false){
        cout<<ss.top();
        ss.pop();
    }
}

int main(){
    string s;
    cin>>s;

    reverse_a_string(s);
}