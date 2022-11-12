#include<bits/stdc++.h>
using namespace std;

vector < vector < int > > v(100005);
int dd[100005], dem;

void dfs(int dinh){
	dem++;
	dd[dinh] = 1;
	for(int i = 0; i < v[dinh].size(); i++){
		if(!dd[v[dinh][i]]) dfs(v[dinh][i]);
	}
}

int main(){
	int t, n, m, cnt;
	cin >> t;
	while(t--){
		cnt = 0;
		cin >> n >> m;
		v.clear();
		v.resize(100005);
		memset(dd, 0, sizeof(dd));
		for(int i = 0; i < m; i++){
			int x, y;
			cin >> x >> y;
			v[x].push_back(y);
			v[y].push_back(x);
		}
		
		for(int i = 1; i <= n; i++){
			dem = 0;
			if(!dd[i]) dfs(i);
			cnt = max(cnt, dem);
		}
		cout << cnt << endl;
	}
}
