#include<bits/stdc++.h>
using namespace std;

int main(){
    int n=0;
    cin>>n;

    unordered_map<string,int>m1;

    string s;

    for(int i=0;i<n;i++){
        cin>>s;

        int check=0;

        unordered_map<string,int>::iterator it;
    
        for(it=m1.begin();it!=m1.end();it++){
            if(it->first == s){
                check = 1;
                break;
            }
        }

        m1[s]++;

        if(check==1){
            char x = it->second +'0';
            s = s + x;
        }

        cout<<s;
    }
}