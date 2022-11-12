#include<bits/stdc++.h>
using namespace std;

vector < vector < int > > v(1005);
int dd[1005] = {0};
int n, c, d;

void dfs(int dinh){
	cout << dinh << " ";
	dd[dinh] = 1;
	for(int i = 0; i < v[dinh].size(); i++){
		int k = v[dinh][i];
		if(!dd[k]) dfs(k);
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n >> c >> d;
		v.clear();
		v.resize(1005);
		memset(dd, 0, sizeof(dd));
		for(int i = 0; i < c ; i++){
			int a, b;
			cin >> a >> b;
			v[a].push_back(b);
			v[b].push_back(a);
		}
		dfs(d);
		cout << endl;
	}
}
