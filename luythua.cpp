#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007

long long tinh(int n, int k){
	if(k==0) return 1;
	long long x=tinh(n,k/2);
	if(k%2==0) return (x * x) % mod;
	return n * (x * x % mod) % mod;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		cout<< tinh(n , k)<< endl;
	}
}
