#include<bits/stdc++.h>
using namespace std;

int main(){
	int t, n;
	cin >> t;
	while(t--){
		cin>>n;
		int a[n], f[n], d=0;
		for(int i=0;i<n;i++) cin>>a[i];
		for(int i=0;i<n;i++){
			f[i]=1;
			for(int j=0;j<i;j++){
				if(a[j]<=a[i]) f[i]=max(f[i] , f[j] + 1);
			}
			d=max(d , f[i]);
		}
		cout<<n-d<<endl;
	}
}
