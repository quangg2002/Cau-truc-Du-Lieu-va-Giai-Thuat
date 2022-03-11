#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		long long n, a[5005], ok=0;
		cin >>n;
		for(int i=0;i<n;i++){
			cin>>a[i];
			a[i]*=a[i];
		}
		sort(a,a+n);
		for(int i=n-1;i>=2;i--){
			int l=0, r=i-1;
			while(l<r){
				if(a[l]+a[r]==a[i]){
					ok=1;
					cout<<"YES"<<endl;
					break;
				}
				if(a[l]+a[r]>a[i]) r--;
				else l++;
			}
			if(ok==1) break;
		}
		if(ok==0) cout<<"NO"<<endl;
	}
}
