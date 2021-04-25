#include <iostream>

using namespace std;
int func(long long n, long long x)
{
	if(n==x)
	return 1;
	else if(x>n)
	return 0;
	else return func(n,x*10)+func(n,x*20);
}
int main() {
	int t;
	cin >> t;										// Reading input from STDIN
	while(t--)
	{
		long long n;
		cin>>n;
		
		if(n==1 || n==10)
		cout<<"Yes"<<endl;
		else if((n%10!=0) && (n%20!=0))
		cout<<"No"<<endl;
		else if(n<10)
		cout<<"No"<<endl;
		else
		{
			int res;
			res = func(n,1);

			if(res>0)
			cout<<"Yes"<<endl;
			else cout<<"No"<<endl;
		}
	}
}



