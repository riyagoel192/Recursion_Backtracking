#include<iostream>
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int primes[] = {2,3,5,7,11,13,17,19,23,29,31,37};

bool solve(ll a[], ll start, ll moves, ll target){
	if(	moves == 0 && start == target){
		return true;
	} 
	else if( moves == 0 && start != target)
	{
		return false;	
	} 
	if(start < 0 || start > target){
		return false;	
	} 
	else{
		for(int i = 0; i < 12; i++){
			if(a[start] % primes[i] == 0){
				return (solve(a, start + primes[i], moves - 1, target) || solve(a, start - primes[i], moves - 1, target));
			}
		}
	}
	return false;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		ll size;
		ll i;
		cin >> size;
		ll a[size];
		for(i = 0; i < size; i++){
			cin >> a[i];
		}
		ll m;
		cin >> m;
		if(solve(a, 0, m, size-1)){
			cout << "YES" << endl;
		}
		else{
			cout << "NO" << endl;
		}
		
	}
	return 0;
}
