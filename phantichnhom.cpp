#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	for(int i=1;i<=t;i++){
		int n, k, dem=1, a[105];
		cin>>n>>k;
		for(int i=0;i<n;i++) cin>>a[i];
		sort(a,a+n);
		cout<<"Case #"<<i<<": ";
		for(int i=0;i<n-1;i++){
			if(a[i+1]-a[i]>k) dem++;
		}
		cout<<dem<<endl;
	}
}
