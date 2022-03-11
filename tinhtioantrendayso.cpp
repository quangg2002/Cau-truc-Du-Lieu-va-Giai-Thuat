#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007 
int main(){
	int t;
	cin>>t;
	while(t--){
		long long n;
		cin>>n;
		long long a[n];
		for(int i=0;i<n;i++) cin>>a[i];
		long long hx=a[0],UCLN=a[0],tich=1;
		for(int i=1;i<n;i++){
			UCLN=__gcd(UCLN,a[i]);
			hx=(hx*a[i]) % mod;
		}
		for(int i=0;i<UCLN;i++)	tich=(tich * hx) % mod;
		cout<<tich<<endl;
	}
}
