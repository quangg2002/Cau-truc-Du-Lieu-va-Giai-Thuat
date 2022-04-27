#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,m;
		cin>>n>>m;
		map<int,int> mp;
		int a[n],b[m];
		for(int i=0;i<n;i++){
			cin>>a[i];
			mp[a[i]]++;
		}
		for(int i=0;i<m;i++) cin>>b[i];
		for(int i=0;i<m;i++){
			if(mp[b[i]]!=0){
				for(int j=0;j<mp[b[i]];j++) cout<<b[i]<<" ";
				mp[b[i]]=0;
			}
		}
		for(auto x:mp){
			if(x.second!=0){
				for(int i=0;i<x.second;i++) cout<<x.first<<" ";
				x.second=0;
			}
		}
		cout<<endl;
	}
}
