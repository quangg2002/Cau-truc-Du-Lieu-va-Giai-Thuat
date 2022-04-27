#include<bits/stdc++.h>
using namespace std;
int ngto(long long n){
	if(n<2) return 0;
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0) return 0;
	}
	return 1;
}
int st(long long n){
	while(n>9){
		int x=n%10;
		int y=(n/10)%10;
		if(y>=x) return 0;
		n/=10;
	}
	return 1;
}
int sg(long long n){
	while(n>9){
		int x=n%10;
		int y=(n/10)%10;
		if(y<=x) return 0;
		n/=10;
	}
	return 1;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,d=0;
		cin>>n;
		long long x=pow(10,n-1), y=pow(10,n);
		for(int i=x;i<=y;i++){
			if(st(i)==1||sg(i)==1){
				if(ngto(i)==1) d++;
			} 
		}
		cout<<d<<endl;
	}
}
