#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,x;
		cin>>n>>x;
		int a[n];
		long long s=0;
		for(int i=0;i<n;i++) cin>>a[i];
		for(int i=0;i<n;i++){
			long long t=1;
			for(int j=n-i-1;j>0;j--){
				t=(t*x)%mod;
			}
			s+=a[i]*t;
		}
		if(s>mod) s%=mod;
		cout<<s<<endl;
	}
}
