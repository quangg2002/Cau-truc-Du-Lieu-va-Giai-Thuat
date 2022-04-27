#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n, d=0;
		cin >> n; map <int , int > mp;
		for(int i=0;i<n;i++){
			int x;
			cin >> x;
			mp[x]++;
		}
		for(auto x : mp){
			if(x.second > 1) d += x.second;
		}
		cout << d << endl;
	}
}
