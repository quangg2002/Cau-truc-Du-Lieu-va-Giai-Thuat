#include<bits/stdc++.h>
using namespace std;
int fibo(int n){
	int f1=0,f2=1;
	int d=0;
	if(n==f1||n==f2) return 1;
	while(d<n){
		d=f1+f2;
		f1=f2;
		f2=d;
	}
	if(d==n) return 1;
	return 0;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,a[100];
		cin>>n;
		for(int i=0;i<n;i++)	cin>>a[i];
		for(int i=0;i<n;i++){
			if(fibo(a[i])==1)	cout<<a[i]<<" ";
		}
		cout<<endl;
	}
}
