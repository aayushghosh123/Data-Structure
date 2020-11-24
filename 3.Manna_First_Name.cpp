#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;

    int n = s.length();

    unordered_map<char,int>m1;

    for(int i=0;i<n;i++){
        if(s[i]>='a' && s[i]<='z')
        m1[s[i]]++;
    }

    unordered_map<char,int>::iterator it;

    for(it=m1.begin();it!=m1.end();it++){
        cout<<it->first<<" "<<it->second<<endl;
    }

    int min_val=0;
    int min_val2=0;

    int count=0,cc=0;

    for(it=m1.begin();it!=m1.end();it++){
        if(it->first=='s'||it->first=='u'||it->first=='v'||it->first=='o'){
            if(cc==0){
            min_val = it->second;
            cc++;
        }
        else if(it->second<min_val)
            min_val = it->second;
        }
        else if(it->first=='j'||it->first=='i'||it->first=='t'){
            if(count==0){
                min_val2 = it->second;
                count++;
            }
            else if(it->second<min_val2)
            min_val2 = it->second;
        }
    }

    min_val2 = min(min_val2,min_val);
    cout<<min_val2<<endl;

    cout<<"SUVO = "<<min_val<<" "<<"SUVOJIT = "<<min_val2;
}