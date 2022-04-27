#include<bits/stdc++.h>
using namespace std;
long long poww(long long n,long long k,long long mod){
	if(k==1) return n;
	long long x=poww(n,k/2,mod);
	if(k%2==0) return (x*x)%mod;
	else return (((x*x)%mod)*n)%mod;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		string a;
		cin>>a;
		long long n=0,b,m;
		cin>>b>>m;
		for(int i=0;i<a.length();i++){
			n=(n*10+(a[i]-'0')) % m;
		}
		cout<<poww(n,b,m)<<endl;
	}
}
