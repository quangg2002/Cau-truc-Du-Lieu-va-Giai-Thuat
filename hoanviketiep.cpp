#include<bits/stdc++.h>
using namespace std;

int a[1005], n, ok;
void sinh(){
	int i=n-1;
	while(i>=0 && a[i]>a[i+1]) i--;
	if(i==0) ok=1;
	else{
		swap(a[i],a[n]);
		int l=i+1, r=n;
		while(l<r){
			swap(a[l],a[r]);
			l++; r--;
		}
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		ok=0;
		cin>>n;
		for(int i=1;i<=n;i++) cin>>a[i];
		sinh();
		if(ok==1) for(int i=1;i<=n;i++) cout<<i<<" ";
		else{
			for(int i=1;i<=n;i++) cout<<a[i]<<" ";
		}
		cout<<endl;
	}
}
