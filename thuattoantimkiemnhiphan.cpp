#include<bits/stdc++.h>
using namespace std;

int tkiem(int a[], int n, int x){
	int l=0, r=n-1;
	while(l<=r){
		int m=(l + r)/2;
		if(a[m]==x) return 1;
		else if(a[m]<x) l=m+1;
		else if(a[m]>x) r=m-1;
	}
	return 0;
}

int main(){
	int n, x, a[100];
	cin>>n>>x;
	for(int i=0;i<n;i++) cin>>a[i];
	if(tkiem(a,n,x)==1) cout<<"1";
	else cout<<"0";
}
