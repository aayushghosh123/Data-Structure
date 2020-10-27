#include<bits/stdc++.h>
using namespace std;

void check_palindrome(string s,int n){
    int arr[26]={0};

    for(int i=0;i<n;i++){
        if(s[i]>='A' && s[i]<='Z'){
            s[i] = s[i] + 32;
        }
    }

    for(int i=0;i<n;i++){
        arr[s[i]-'a']++;
    }

    int c=0;

    for(int i=0;i<26;i++){
        if(arr[i]==1){
            c++;
        }
        else if(arr[i]%2==1){
            cout<<"Not a Palindrome";
            exit(0);
        }
    }

    if(c==1){
        cout<<"It is a Palindrome";
    }
    else if(c>1){
        cout<<"Not a Palindrome";
    }

    cout<<"It is a Palindrome";
}

int main(){
    string s;
    cin>>s;

    int n = s.length();

    check_palindrome(s,n);
}