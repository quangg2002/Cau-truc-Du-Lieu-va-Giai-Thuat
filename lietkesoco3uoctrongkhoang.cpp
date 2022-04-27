#include<bits/stdc++.h>
using namespace std;
int nto(int n){
	if(n<2) return 0;
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0) return 0;
	}
	return 1;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		long long n,m,d=0;
		cin>>n>>m;
		long long t=sqrt(n),q=sqrt(m);
		if(t*t!=n) n=n+1;
		for(int i=t;i<=q;i++){
			if(nto(i)) d++;
		}
		cout<<d<<endl;
	}
}

