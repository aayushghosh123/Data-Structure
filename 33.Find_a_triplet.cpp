#include <bits/stdc++.h>
using namespace std;

bool find_the_three_sum_Numbers(int A[], int n, int sum)
{
	for (int i = 0; i < n- 2; i++) 
	{
		unordered_set<int> s;
		int curr_sum = sum - A[i];
		for (int j = i + 1; j < n; j++) 
		{
			if (s.find(curr_sum - A[j]) != s.end()) 
			{
				cout<<"Triplets are "<<A[i]<<" "<<A[j]<<" "<<curr_sum - A[j];
				return true;
			}
			s.insert(A[j]);
		}
	}
	return false;
}
int main()
{
    int n=0;
    cin>>n;
	int A[n] = {0};
	int sum = 0;
    cin>>sum;
	find_the_three_sum_Numbers(A, n, sum);

	return 0;
}
