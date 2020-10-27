#include<bits/stdc++.h>
using namespace std;

void check_parenthesis(string s){
    stack<int>ss;
    int i=0;
    while(s[i] != '\0'){
        //cout<<s[i]<<" ";
    if(s[i]=='(' || s[i]=='[' || s[i]=='{'){
        ss.push(s[i]);
    }else{
        if(s[i] == ')' && ss.top()=='('){
            ss.pop();
        }
        else if(s[i] == '}' && ss.top()=='{'){
            ss.pop();
        }
        else if(s[i] == ']' && ss.top()=='['){
            ss.pop();
        }
    }
    i++;
    }

    if(ss.empty())
    cout<<"Balanced";
    else
    cout<<"Not Balanced";
}

int main(){
    string s;

    cin>>s;

    check_parenthesis(s);
}