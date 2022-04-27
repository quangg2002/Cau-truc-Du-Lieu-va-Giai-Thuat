#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,a[100005];
		cin>>n;
		for(int i=0;i<n;i++) cin>>a[i];
		long long tt=0, ts=0, t;
		for(int i=0;i<n;i++){
			t=max(tt,ts);
			ts=tt+a[i];
			tt=t;
		}
		cout<<max(tt,ts)<<endl;
	}
}
