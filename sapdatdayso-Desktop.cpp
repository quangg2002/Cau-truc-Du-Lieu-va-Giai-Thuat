#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		long long x,n;
		cin>>n;
		map <long long, int> mp;
		for(int i=0;i<n;i++){
			cin>>x;
			mp[x]=1;
		}
		for(int i=0;i<n;i++){
			if(mp[i]==1) cout<<i<<" ";
			else cout<<"-1 ";
		}
		cout<<endl;
	}
}
