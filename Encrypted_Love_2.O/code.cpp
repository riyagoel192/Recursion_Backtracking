
// Sample code to perform I/O:

#include <iostream>
#include<vector>
using namespace std;

void compute(int start,int end,string s)
{
	if(start>end)
	return;

	int mid = (start+end)/2;
	cout<<s[mid];

	compute(mid+1,end,s);
	compute(start,mid-1,s);

	
}
int main() {
	int t;
	cout<<"T"<<endl;
	cin >> t;
	while(t--)
	{
		int n;
		vector<char>res;
		string s;
		cout<<"N and S"<<endl;
		cin>>n>>s;

		compute(0,n-1,s);
		cout<<endl;

	}									
			
}

