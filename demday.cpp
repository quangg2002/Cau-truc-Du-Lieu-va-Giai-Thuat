#include<bits/stdc++.h>
using namespace std;

#define mod 123456789
long long xuly(long long n, long long k){
	if(k==0) return 1;
	long long m=xuly(n,k/2);
	if(k%2==0) return (m*m)%mod;
	else return n*(m*m%mod)%mod;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		long long n;
		cin>>n;
		cout<<xuly(2,n-1)<<endl;
	}
}
//Giai thich test: 3
// 4 day [1,1,1], [1,2], [2,1], [3]
