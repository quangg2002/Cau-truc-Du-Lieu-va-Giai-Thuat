#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n, a[100],dem=0;
		cin>>n;
		for(int i=0;i<n;i++) cin>>a[i];
		int ucln=__gcd(a[0],a[1]);
		for(int i=2;i<n;i++) ucln=__gcd(ucln,a[i]);
		for(int i=1;i<=sqrt(ucln);i++){
			if(ucln%i==0){
				dem++;
				int k=n/i;
				if(k!=sqrt(ucln)) dem++;
			}
		}
		cout<<dem<<endl;
	}
}
