#include<bits/stdc++.h>
using namespace std;

int main(){
	int t, n;
	cin >> t;
	while(t--){
		cin >> n;
		int d = 0, kt;
		map < int , int > mp;
		for(int i=0;i < n; i++){
			int x;
			cin >> x;
			mp[x]++;
		}
		for(auto x : mp) {
			if(x.second > d){
				d = x.second;
				kt = x.first;
			}
		}
		if(d > n/2) cout << kt << endl;
		else cout << "NO" << endl;
	}
}
