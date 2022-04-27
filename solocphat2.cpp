#include<bits/stdc++.h>
using namespace std;

int xuly(long long n){
	while(n>0){
		int x=n%10;
		if(x!=6 && x!=8) return 0;
		n/=10;
	}
	return 1;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		long long m=pow(10, n);
		for(long long i=m;i>=6;i--){
			if(xuly(i)) cout<<i<<" ";
		}
		cout<<endl;
	}
}
