#include<bits/stdc++.h>
using namespace std;

int main(){
    int n=0;
    cin>>n;

    set<int>s;

    int data=0;

    for(int i=0;i<n;i++){
        cin>>data;
        s.insert(data);
    }

    set<int>::iterator j;
    set<int>::iterator i;
    set<int>::iterator k;

    int c=1;

    // for(i=s.begin();i!=s.end();i++)
    // cout<<*i<<" ";
    // exit(0);

    j = s.begin();
    advance(j,2);

    k = s.begin();



    for(i=j;i!=s.end();++i,++k){
        if((*i) - *(k) == 1){
            c++;
        }
        else{
            cout<<c;
            exit(0);
        }
    }
}