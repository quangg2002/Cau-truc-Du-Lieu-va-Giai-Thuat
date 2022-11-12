#include<bits/stdc++.h>
using namespace std;

int n, c, mau[1005];
vector < vector < int > > v(1005);

int dfs(int dinh){
	mau[dinh] = 1;
	for(auto x : v[dinh]){
		if(mau[x] == 0){
			mau[x] = dinh;
			if(dfs(x)) return 1;
		}
		else if(mau[x] == 1) return 1;
	}
	mau[dinh] = 2;
	return 0;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int ok = 0;
		cin >> n >> c;
		v.clear();
		v.resize(1005);
		memset(mau, 0, sizeof(mau));
		for(int i = 0; i < c; i++){
			int a, b;
			cin >> a >> b;
			v[a].push_back(b);
		}
		for(int i = 1; i <= n; i++){
			memset(mau, 0, sizeof(mau));
			if(dfs(i)){
				ok = 1;
				cout << "YES\n";
				break;
			}
		}
		if(ok == 0) cout << "NO\n";
	}
}
