#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n, x;
		cin>>n;
		map<int, int> mp;
		for(int i=0;i<n;i++){
			cin>>x;
			mp[x]++;
		}
		for(auto x : mp){
			if(x.second % 2==1){
				cout<< x.first <<endl;
				break;
			}
		}
	}
}
