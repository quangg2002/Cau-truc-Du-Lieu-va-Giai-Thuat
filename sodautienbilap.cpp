#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,ok=0;
		cin>>n;
		long long a[n];
		map<long long, long long> mp;
		for(int i=0;i<n;i++){
			cin>>a[i];
			mp[a[i]]++;	
		}
		for(int i=0;i<n;i++){
			if(mp[a[i]]>1){
				cout<<a[i]<<endl;
				ok=1;
				break;
			}
		}
		if(ok==0) cout<<"NO"<<endl;
	}
}
