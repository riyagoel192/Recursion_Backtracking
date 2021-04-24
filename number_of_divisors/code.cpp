
// Sample code to perform I/O:

#include <iostream>
#include<vector>
using namespace std;

int main() {
	long long t;
	cin >> t;										// Reading input from STDIN
	while(t--)
	{
		long long n,k;
		cin>>n>>k;
		long long sum = (n*(n + 1)) / 2;
		long long N = n/k;
		while(N>0)
		{
			sum = sum - k*(N*(N + 1)/2) + (N*(N + 1)/ 2);
			N = N / k;
		}
		cout<<sum<<endl;
	}
		// int sum=0;
		// vector<int>res;
		// int *a;
		// a = new int[n];
		// for(int i=0;i<n;i++)
		// {
		// 	a[i]=i+1;
		// }
		// for(int i=0;i<n;i++)
		// {
		// 	if((a[i]%k)==0)
		// 	{
		// 		int div=0;
		// 		for(int k=1;k<a[i];k++)
		// 		{
		// 			if((a[i]%k)==0)
		// 			div=k;
		// 		}
		// 		res.push_back(div);
		// 	}
		// 	else
		// 	{
		// 		res.push_back(a[i]);
		// 	}

		// 	sum+=res.at(i);
		// }

		// cout<<sum<<endl;
}

// Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail


// Write your code here

