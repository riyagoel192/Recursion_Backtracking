#include<iostream>

using namespace std;

long long solve(long long a, long long b, long long c)
{
	if(a>b){

return (a-b)/2+(a-b)%2;

}

else if(b%c==0)

{

return 1+solve(a,b/c,c);

}

else if(a==b)

{

return 0;

}

else

{

long long m=(b/c+1)*c;

return (m-b)/2+(m-b)%2+solve(a,m,c);

}
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long a,b,c;
		cin>>a>>b>>c;
		cout<<solve(a,b,c)<<"\n";
	}
}

