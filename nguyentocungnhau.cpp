#include<bits/stdc++.h>
using namespace std;
int ucln(int n,int m){
	while(m!=0){
		int t=n%m;
		n=m;
		m=t;
	}
	if(n==1) return 1;
	return 0;
}
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
		int x,d=0;
		cin>>x;
		for(int i=1;i<x;i++){
			if(ucln(x,i)==1) d++;
		}
		if(nto(d)==1) cout<<"1"<<endl;
		else cout<<"0"<<endl;
	}
}
