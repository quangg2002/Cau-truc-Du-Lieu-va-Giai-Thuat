#include<bits/stdc++.h>
using namespace std;

int mod = 1e9 + 7;

long lngc(long n){
	long  s = 0;
	while(n > 0){
		s = s * 10 + n % 10;
		n /= 10;
	}
	return s;
}
long long tlt(long a, long b){
	if(b == 0) return 1;
	long long x = tlt(a, b/2);
	if(b % 2 == 0) return (x * x) % mod;
	return a * ((x * x) % mod) % mod;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		long n, m;
		cin >> n;
		m = n;
		cout << tlt(n,lngc(m)) << "\n";
	}
}
