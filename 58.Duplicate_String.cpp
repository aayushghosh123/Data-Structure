#include<bits/stdc++.h>
using namespace std;

void find_duplicate(char str[],int n){
    int arr[26]={0};

    for(int i=0;i<n;i++){
        arr[str[i]-'a']++;
    }

    for(int i=0;i<26;i++){
        if(arr[i]>=2)
        cout<<char('a'+i)<<" ";
    }
}

int main(){
    char str[100];

    gets(str);

    int n = strlen(str);

    find_duplicate(str,n);
}