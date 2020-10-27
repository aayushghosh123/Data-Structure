#include<bits/stdc++.h>
using namespace std;

int main(){
    unordered_map<string,int>m1;

    int n=0;
    cin>>n;
    string arr[n];

    for(int i=0;i<n;i++)
    cin>>arr[i];

    for(int i=0;i<n;i++){
        m1[arr[i]]++;
    }

    unordered_map<string,int>::iterator i;

    for(i=m1.begin();i!=m1.end();i++){
        cout<<i->first<<" "<<i->second<<endl;
    }

    unordered_map<string,int>::iterator j;

    int max_ele = 0;

    for(j=m1.begin();j != m1.end();j++){
        if(max_ele < j->second){
            max_ele = j->second;
        }
    }

    cout<<max_ele<<endl;

    j = m1.begin();

    int s_max_ele=j->second;

    for(j=m1.begin();j != m1.end();j++){
        if(max_ele > s_max_ele && s_max_ele<j->second){
            max_ele = j->second;
        }
    }

    cout<<s_max_ele<<endl;

    j = m1.begin();

    for(j=m1.begin();j!=m1.end();j++){
        if(j->second == s_max_ele){
        cout<<j->first;
        exit(0);
        }
    }
}