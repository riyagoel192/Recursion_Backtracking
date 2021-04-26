
// Sample code to perform I/O:

#include <iostream>

using namespace std;
void compute(string s, int start,int end)
{
	if(start>end)
	return;

	int mid = (start+end)/2;
	cout<<s[mid];

	compute(s,start,mid-1);
	compute(s,mid+1,end);
}

int main() {
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		string s;
		cin>>n>>s;
		compute(s,0,n-1);
		cout<<endl;
	}
}


