#include<bits/stdc++.h>
using namespace std;

int main(){
    string ss;
    cin>>ss;

    unordered_map<char,int>m1;

    int n = ss.length();

    for(int i=0;i<n;i++){
        m1[ss[i]]++;
    }

    int max_val = m1.begin()->second;
    char x = m1.begin()->first;

    unordered_map<char,int>::iterator it;

    // for(it = m1.begin();it!=m1.end();it++){
    //     cout<<it->first<<" "<<it->second<<endl;
    // }

    for(it = m1.begin();it!=m1.end();it++){
        if(it->second > max_val){
        max_val = it->second;
        x = it->first;
        }
    }

    for(it = m1.begin();it!=m1.end();it++){
        if(max_val == it->second){
            if((x - 'a')>(it->first-'a'))
            x = it->first;
        }
    }

    cout<<x<<" "<<max_val;
}