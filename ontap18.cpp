#include<bits/stdc++.h>
using namespace std;

vector < vector < int > > v(1005);
int dd[1005] = {0};

void bfs(int dinh){
	queue < int > q;
	q.push(dinh);
	while(!q.empty()){
		int x = q.front();
		dd[x] = 1;
		cout << x << " ";
		q.pop();
		for(int i = 0; i < v[x].size(); i++){
			if(!dd[v[x][i]]){
				dd[v[x][i]] = 1;
				q.push(v[x][i]);
			}
		}
	}
}

int main(){
	int t, n, c, d;
	cin >> t;
	while(t--){
		cin >> n >> c >> d;
		v.clear();
		v.resize(1005);
		memset(dd, 0, sizeof(dd));
		for(int i = 0; i < c; i++){
			int x, y;
			cin >> x >> y;
			v[x].push_back(y);
			v[y].push_back(x);
		}
		bfs(d);
		cout << "\n";
	}
}
