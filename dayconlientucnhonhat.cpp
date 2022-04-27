#include<bits/stdc++.h>
using namespace std;

int xuly(int a[],int n,int x){
	int r=0, l=0 ,sum=0, min=n+1;
	while(r < n){
		while(sum <= x&& r < n) sum+=a[r++];
		while(sum > x && l < n){
			if(r-l < min) min=r-l;
			sum-=a[l++];
		}
	}
	return min;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,x;
		cin>>n>>x;
		int a[n];
		for(int i=0;i<n;i++) cin>>a[i];
		if(xuly(a,n,x)==n+1) cout<<"-1"<<endl;
		else cout<<xuly(a,n,x)<<endl;
	}
}
