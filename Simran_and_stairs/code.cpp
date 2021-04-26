
// Sample code to perform I/O:

#include <iostream>
#define ll long long 
using namespace std;

ll func(ll num)
{
	if(num==0 || num==1)
	return 1;

	else if(num==2) return 2;

	else return func(num-1) + func(num-2) + func(num-3);

	
}
int main() {
	ll num;
	cin >> num;										// Reading input from STDIN
	cout<<func(num);
}

// Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail


// Write your code here

