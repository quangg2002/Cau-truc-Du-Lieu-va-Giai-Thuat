#include<bits/stdc++.h>
using namespace std;
int nto(int n){
	if(n<2) return 0;
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0) return 0;
	}
	return 1;
}
int tcs(int n){
	int sum=0;
	while(n!=0){
		sum+=n%10;
		n/=10;
	}
	return sum;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,sum=0,p,i=2;
		cin>>n;
		p=n;
		while(n>1){
			if(n%i==0){
				int j=i;
				while(j>0){
					sum+=j%10;
					j/=10;
				}
				n/=i;
			}else i++;
		}
		if(tcs(p)==sum&&nto(p)==0) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
}
