#include<bits/stdc++.h>
using namespace std;

int n, c, dd[1005] = {0};
vector < vector < int > > v(1005);

void dfs(int dinh){
	dd[dinh] = 1;
	for(int i = 0; i < v[dinh].size(); i++){
		int k = v[dinh][i];
		if(!dd[k]){
			dd[k] = 1;
			dfs(k);
		}
	}
}

int stplt(){
	int dem = 0;
	for(int i = 1; i <= n; i++){
		if(!dd[i]){
			dem++;
			dfs(i);
		}
	}
	return dem;
}

void canhcau(){
	for(int i = 1; i <= n; i++){
		for(int j = 0; j < v[i].size(); j++){
			int k = v[i][j];
			v[i].erase(v[i].begin() + j);
			dfs(i);
			if(stplt() > 0 && i < k)	cout << i << " " << k << " ";
			v[i].insert(v[i].begin() + j, k);
			memset(dd, 0, sizeof(dd));
		}
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n >> c;
		v.clear();
		v.resize(1005);
		memset(dd, 0, sizeof(dd));
		for(int i = 0; i < c; i++){
			int x, y;
			cin >> x >> y;
			v[x].push_back(y);
			v[y].push_back(x);
		}
		canhcau();
		cout << endl;
	}
}
