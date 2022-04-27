#include<bits/stdc++.h>
using namespace std;
int mod = 1e9 + 7;

long long xuly(int a, long long b){
	if(b==0) return 1;
	long long x=xuly(a,b/2);
	if(b%2==0) return (x*x)%mod;
	return (a*(x * x % mod)) % mod;
}
int main(){
	int a;
	long long b;
	while(1){
		cin>>a>>b;
		if(!a && !b) break;
		cout<<xuly(a,b)<<endl;
	}
}
