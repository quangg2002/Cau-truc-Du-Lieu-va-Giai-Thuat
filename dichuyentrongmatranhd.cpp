#include<bits/stdc++.h>
using namespace std;

int main(){
    int t, n, m;
    cin >> t;
    while(t--){
        cin >> m >> n;
        int a[m + 5][n + 5];
        int kq[m + 5][n + 5];
        for(int i = 1; i <= m; i++){
            for(int j = 1; j <= n; j++){
                cin >> a[i][j];
            }
        }
        memset(kq, -1, sizeof(kq));
        queue < pair < int, int > > q;
        pair < int, int > u;
        q.push({1,1});
        kq[1][1] = 0;
        while(!q.empty()){
            int x = q.front().first;
            int y = q.front().second;
            q.pop();
            if(x + a[x][y] <= m && kq[x + a[x][y]][y] == -1){
                kq[x + a[x][y]][y] = kq[x][y] + 1;
                q.push({x + a[x][y], y});
            }
            if(y + a[x][y] <= n && kq[x][y + a[x][y]] == -1){
                kq[x][y + a[x][y]] = kq[x][y] + 1;
                q.push({x, y + a[x][y]});
            }
            if(kq[m][n] != -1){
                cout << kq[m][n] << endl;
                break;
            }
        }
        if(kq[m][n] == -1) cout << "-1" << endl;
    }
}