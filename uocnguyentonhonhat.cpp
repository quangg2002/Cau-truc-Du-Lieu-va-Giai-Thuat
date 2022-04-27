#include<bits/stdc++.h>
using namespace std;
long long uoc(long long n){
	int ok=0;
	for(int i=2;i<=sqrt(n);i++){
		while(n%i==0){
			ok=1;
			return i;
		}
	}
	if(ok==0) return n;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		long long n;
		cin>>n;
		for(int i=1;i<=n;i++){
			cout<<uoc(i)<<" ";
		}
		cout<<endl;
	}
}

