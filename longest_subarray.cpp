#include<bits/stdc++.h>
using namespace std;

void longest_subarray(int arr[],int n){
	sort(arr,arr+n);

	unordered_map<int,int>m1;

	for(int i=0;i<n;i++)
	m1[arr[i]]++;

	int len=0,max_len=0;

	int x = arr[0];

	unordered_map<int,int>::iterator it;

	for(it = m1.begin();it != m1.end();it++){
		if(it->first == x){
			len++;
			x++;
		}
		else{
			if(max_len<len)
			max_len = len;

			len=1;
			x = it->first;
			x = x + 1;
		}
	}

	if(len>max_len)
	max_len = len;

	if(max_len==1)
	cout<<0;
	else
	cout<<max_len;
}

int main(){
	int n=0;
	cin>>n;

	int arr[n]={0};

	for(int i=0;i<n;i++)
	cin>>arr[i];

	longest_subarray(arr,n);
}