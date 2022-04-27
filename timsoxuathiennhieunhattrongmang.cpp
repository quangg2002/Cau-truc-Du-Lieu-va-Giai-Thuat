#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		map<long long,int>mp;
		for(int i=0;i<n;i++){
			long long x;
			cin>>x;
			mp[x]++;
		}
		int max=0;
		for(auto x : mp){
			if(x.second>max) max=x.second;
		}
		for(auto x : mp ){
			if(x.second==max) cout<<x.first<<" ";
		}
	}
}
