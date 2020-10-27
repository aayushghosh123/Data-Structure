#include<bits/stdc++.h>
using namespace std;

void reverse_string(char str[],int n){
    for(int i=0;i<n/2;i++){
        swap(str[i],str[n-1-i]);
    }

    cout<<str;
}

int main(){
 char str[100];   

    gets(str);

    int n = strlen(str);

    reverse_string(str,n);
}