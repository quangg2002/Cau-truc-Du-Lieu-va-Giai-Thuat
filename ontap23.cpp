#include<bits/stdc++.h>
using namespace std;

int n, c, dd[1005];
vector < vector < int > > v(1005);

void dfs(int dinh){
	dd[dinh] = 1;
	for(auto x : v[dinh]){
		if(!dd[x]){
			dd[x] = 1;
			dfs(x);
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
			int a, b;
			cin >> a >> b;
			v[a].push_back(b);
			v[b].push_back(a);
		}
		for(int i = 1; i <= n; i++){
			memset(dd, 0, sizeof(dd));
			dd[i] = 1;
			if(i == 1) dfs(2);
			else dfs(1);
			for(int j = 1; j <= n; j++){
				if(!dd[j]){
					cout << i << " ";
					break;
				}
			}
		}
		cout << endl;
	}
}	
