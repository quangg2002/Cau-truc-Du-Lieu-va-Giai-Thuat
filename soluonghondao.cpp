#include<bits/stdc++.h>
using namespace std;

int dx[] = {-1, -1, -1, 0, 0, 1, 1, 1};
int dy[] = {-1, 0, 1, -1, 1, -1, 0, 1};
int dd[505][505], n ,m;
char a[505][505];

void xuly(int x, int y){
    for(int i = 0; i < 8; i++){
        int xm = x + dx[i];
        int ym = y + dy[i];
        if(xm >= 0 && xm < n && ym >= 0 && ym < m && !dd[xm][ym] && a[xm][ym] == 'W'){
            dd[xm][ym] = 1;
            xuly(xm, ym);
        }
    }
}

int main(){
    int t, cnt;
    t = 1;
    while(t--){
        cin >> n >> m;
        cnt = 0;
        memset(dd, 0, sizeof(dd));
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                cin >> a[i][j];
            }
        }
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(a[i][j] == 'W' && !dd[i][j]){
                    dd[i][j] = 1;
                    xuly(i, j);
                    cnt++;
                }
            }
        }
        cout << cnt << endl;
    }
}