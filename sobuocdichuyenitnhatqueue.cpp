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
        queue < pair < int, int > > q;
        memset(kq, -1, sizeof(kq));
        kq[1][1] = 0;
        q.push({1, 1});
        while(!q.empty()){
            int x = q.front().first;
            int y = q.front().second;
            q.pop();
            int duoi = abs(a[x + 1][y] - a[x][y]), phai = abs(a[x][y + 1] - a[x][y]), cheo = abs(a[x + 1][y + 1] - a[x][y]);
            if(x + duoi <= m && kq[x + duoi][y] == -1){
                kq[x + duoi][y] = kq[x][y] + 1;
                q.push({x + duoi, y});
            }
            if(y + phai <= n && kq[x][y + phai] == -1){
                kq[x][y + phai] = kq[x][y] + 1;
                q.push({x, y + phai});
            }
            if(x + cheo <= m && y + cheo <= n && kq[x + cheo][y + cheo] == -1){
                kq[x + cheo][y + cheo] = kq[x][y] + 1;
                q.push({x + cheo, y + cheo});
            }
            if(kq[m][n] != -1){
                cout << kq[m][n] << endl;
                break;
            }
        }
        if(kq[m][n] == -1) cout << "-1\n";
    }
}