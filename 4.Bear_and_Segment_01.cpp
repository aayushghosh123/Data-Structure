#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;

    int n = s.length();

    int count=0;
    bool check = 0;

    for(int i=0;i<n;i++){
        if(s[i]=='1' && count==0){
            count++;
            check=1;
        }
        else if(s[i]=='0' && count==1){
        count++;
        }
        else if(s[i]=='1' && count==2){
            count++;
        }

        if(count>2){
            cout<<"No";
            exit(0);
        }
    }

    if(count==0){
        cout<<"No";
    }
    else
    cout<<"Yes";
}