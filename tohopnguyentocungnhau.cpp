#include<bits/stdc++.h>
using namespace std;
int xuly(long long n,long long m){
	long long sum=(n*(n+1))/2;
	long long t1=(sum+m)/2;
	long long t2=sum-t1;
	if(sum<=m) return 0;
	if(t1+t2==sum&&abs(t1-t2)==m) {
		if(__gcd(t1,t2)==1) return 1;
	}
	return 0;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		long long n,m;
		cin>>n>>m;
		if(xuly(n,m)==1) cout<<"Yes"<<endl;
		else cout<<"No"<<endl;
	}
}
