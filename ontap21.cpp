#include<bits/stdc++.h>
using namespace std;

int n, c, dd[1005], truoc[1005];
vector < vector < int > > v(1005);

int dfs(int dinh){
	dd[dinh] = 1;
	for(auto x : v[dinh]){
		if(!dd[x]){
			truoc[x] = dinh;
			if(dfs(x)) return 1;
		}
		else if(x != truoc[dinh]) return 1;
	}
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
		memset(dd, 0, sizeof(dd));
		memset(truoc, 0, sizeof(truoc));
		for(int  i = 0; i < c; i++){
			int a, b;
			cin >> a >> b;
			v[a].push_back(b);
			v[b].push_back(a);
		}
		for(int i = 1; i <= n; i++){
			memset(dd, 0, sizeof(dd));
			if(dfs(i)){
				ok = 1;
				cout << "YES\n";
				break;
			}
		}
		if(!ok) cout << "NO\n";
	}
}
