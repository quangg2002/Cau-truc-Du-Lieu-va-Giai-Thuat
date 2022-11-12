#include<bits/stdc++.h>
using namespace std;

int n, m, dd[100][100] = {0};
char a[100][100];
int dx[] = { -1 , 0, 0, 1 };
int dy[] = { 0, -1, 1, 0 };

void vatcan(int x, int y){
	for(int i = 0; i < 4; i++){
		int xm = x + dx[i];
		int ym = y + dy[i];
		if(xm >= 0 && ym >= 0 && xm <= n && ym <= m && a[xm][ym] == '#' && dd[xm][ym] == 0){
			dd[xm][ym] = 1;
			vatcan(xm, ym);
		}
	}
}

int main(){
	cin >> n >> m;
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= m; j++){
			cin >> a[i][j];
		}
	}
	int dem = 0;
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= m; j++){
			if(a[i][j] == '#' && dd[i][j] == 0){
				dem ++;
				dd[i][j] = 1;
				vatcan(i, j);
			}
		}
	}
	cout << dem << endl;
}
