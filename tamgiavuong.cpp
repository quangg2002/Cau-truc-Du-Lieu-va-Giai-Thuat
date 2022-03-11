#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		long long a[n];
		for(int i = 0; i < n; i++) {
			cin>>a[i];
			a[i] *= a[i];
		}
		sort(a,a+n);
		int ok = 0;
		for(int i=0;i<n;i++){
			for(int j=i+1;j<n;j++){
				if(binary_search(a,a+n,a[i]+a[j])){
					cout<<"YES\n";
					ok=1;
					break;
				}
			}
			if(ok==1) break;
		}
		if(ok==0) cout<<"NO\n";
	}
}

