#include<bits/stdc++.h>
using namespace std;

int dd[1005], n, c, q, a, b;
vector < vector < int > > v;

void dfs(int dinh, int dinh2){
    if(dd[dinh2]) return;
    dd[dinh] = 1;
    for(int i = 0; i < v[dinh].size(); i++){
        int k = v[dinh][i];
        if(!dd[k]) dfs(k, dinh2);
    }
}

int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n >> c;
		v.clear();
		v.resize(n + 5);
		for(int i = 0; i < c; i++){
			int x, y;
			cin >> x >> y;
			v[x].push_back(y);
			v[y].push_back(x);
		}
		cin >> q;
		while(q--){
			cin >> a >> b;
            memset(dd, 0, sizeof(dd));
			dfs(a, b);
			cout << (dd[b] ? "YES\n" : "NO\n");
		}
	}
}