#include<bits/stdc++.h>
using namespace std;

int main(){
	int t, n, m;
	cin >> t;
	while(t--){
		cin >> n >> m;
		int a[n + 5][m + 5], kq[n + 5][m + 5];
		for(int i = 1; i <= n; i++){
			for(int j = 1; j <= m; j++){
				cin >> a[i][j];
			}
		}
		memset(kq,-1, sizeof(kq));
		queue < pair < int, int > > q;
		kq[1][1] = 0;
		q.push({1, 1});
		while(!q.empty()){
			int x = q.front().first;
			int y = q.front().second;
			q.pop();
			int duoi = abs(a[x + 1][y] - a[x][y]), ngang = abs(a[x][y + 1] - a[x][y]) , cheo = abs(a[x + 1][y + 1] - a[x][y]);
			if(x + duoi <= n && kq[x + duoi][y] == -1){
				kq[x + duoi][y] = kq[x][y] + 1;
				q.push({x + duoi, y});
			}
			if(y + ngang <= m && kq[x][y + ngang] == -1){
				kq[x][y + ngang] = kq[x][y] + 1;
				q.push({x, y + ngang});
			}
			if(x + cheo <= n && y + cheo <= m && kq[x + cheo][y + cheo] == -1){
				kq[x + cheo][y + cheo] = kq[x][y] + 1;
				q.push({x + cheo, y + cheo});
			}
			if(kq[n][m] != -1){
				cout << kq[n][m] << endl;
				break;
			}
		}
		if(kq[n][m] == -1) cout << "-1" << endl;
	}
}
