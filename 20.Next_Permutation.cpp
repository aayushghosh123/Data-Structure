#include<bits/stdc++.h>
using namespace std;

    static int c=0;

void find_permutation(string s,int l,int r){
    if(l==r){
        c++;
        if(c==2){
        // cout<<"Yes";
        cout<<s<<endl;
        exit(0);}
    }
    else{
        for(int i=l;i<=r;i++){
            swap(s[l],s[i]);
            find_permutation(s,l+1,r);
            swap(s[l],s[i]);

        }
    }
}

int main(){
    int n=0;
    
    cin>>n;

    string s;

    int len=0;

    while(n>0){
        s += n%10 +'0';
        n = n/10;
        len++;
    }

    for(int i=0;i<len/2;i++){
        swap(s[i],s[len-1-i]);
    }

    //cout<<s<<endl;

    int x = s.length();

    if(x==1){
        cout<<s;
        exit(0);
    }

    find_permutation(s,0,x-1);
}