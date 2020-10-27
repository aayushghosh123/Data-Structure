#include<bits/stdc++.h>
using namespace std;

int main(){
    int n=0;
    int m=0;

    cin>>n>>m;

    int size1 = 0,size2 = 0;

    string s1,s2;

    while(n>0){
        char x = (n%2)+'0';
        s1 = s1+x;
        n = n/2;
        size1++;
    }

    while(m>0){
        char x = (m%2)+'0';
        s2 = s2+x;
        m = m/2;
        size2++;
    }

    while(size1<8){
        s1 = s1 + '0';
        size1++;
    }

    cout<<s1<<endl;

    while(size2<8){
        s2 = s2 + '0';
        size2++;
    }

    cout<<s2<<endl;

    int check=0;

    for(int i=0;i<8;i++){
        if(s1[i] != s2[i])
        check++;
    }

    cout<<check;
}