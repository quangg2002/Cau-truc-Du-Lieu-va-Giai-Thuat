#include<bits/stdc++.h>
using namespace std;

char a[100][100];
int n,m;
int dx[4]={-1,0,0,1};
int dy[4]={0,-1,1,0};
void ff(int x, int y){
	a[x][y] = '1';
	for(int i = 0; i < 4; i++){
		int xm = x + dx[i], ym = y + dy[i];
		if(xm >=1 && xm <= n && ym >=1 && ym <=m && a[xm][ym] == 'O'){
			ff(xm, ym);
		}
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n>>m;
		for(int i = 1; i <= n; i++){
			for(int j = 1; j <= m; j++){
				cin >> a[i][j];
			}
		}
		for(int i = 1; i <= n; i++){
			if(a[i][1] == 'O') ff(i, 1);
			if(a[i][m] == 'O') ff(i, m);
		}
		for(int i = 1; i <=m; i++){
			if(a[1][i] == 'O') ff(1, i);
			if(a[n][i] == 'O') ff(n, i);
		}
		for(int i = 1; i <= n; i++){
			for(int j = 1; j <= m; j++){
				if(a[i][j] != '1'){
					cout << "X ";
				}
				else cout << "O ";
			}
			cout << endl;
		}
	}
}


