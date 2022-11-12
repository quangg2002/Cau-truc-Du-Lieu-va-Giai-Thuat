#include<bits/stdc++.h>
using namespace std;

int dd[1005];
vector < int > v[1005];

void bfs(int dinh){
    queue < int > q;
    q.push(dinh);
    while(!q.empty()){
        int x = q.front();
        q.pop();
        dd[x] = 1;
        for(int i = 0; i < v[x].size(); i++){
            if(!dd[v[x][i]]){
                q.push(v[x][i]);
            }
        } 
    }
}

int main(){
	int t, n, c, cnt;
	cin >> t;
	while(t--){
		cin >> n >> c;
        cnt = 0;
        memset(dd, 0, sizeof(dd));
        for(int i = 0; i < 1005; i++) v[i].clear();
		for(int i = 0; i < c; i++){
			int x, y;
			cin >> x >> y;
			v[x].push_back(y);
			v[y].push_back(x);
		}
        for(int i = 1; i <= n; i++){
            if(!dd[i]){
                cnt++;
                bfs(i);
            }
        }
        cout << cnt << endl;
	}
}