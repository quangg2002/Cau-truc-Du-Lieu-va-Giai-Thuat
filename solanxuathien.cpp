#include<bits/stdc++.h>
using namespace std;

int main(){
	int t, n, x, d;
	cin >> t;
	while(t--){
		cin >> n >> d;
		map <int,int> mp;
		for(int i=0;i < n;i++){
			cin >> x;
			mp[x]++;
		}
		if(mp[d] != 0) cout << mp[d] << endl;
		else cout << -1 << endl;
	}
}
