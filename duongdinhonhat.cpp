#include<bits/stdc++.h>
using namespace std;

int main(){
    int t, n, m;
    cin >> t;
    while(t--){
        cin >> n >> m;
        int dd[n + 5][m + 5], a[n + 5][m + 5];
        memset(dd, 0, sizeof(dd));
        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= m; j++) cin >> a[i][j];
        }
        for(int i = 1; i <= n; i++) dd[i][1] = dd[i - 1][1] + a[i][1];
        for(int i = 1; i <= m; i++) dd[1][i] = dd[1][i - 1] + a[1][i];
        for(int i = 2; i <= n; i++){
            for(int j = 2; j <= m; j++){
                dd[i][j] = min(dd[i- 1][j], min(dd[i][j - 1], dd[i - 1][j - 1])) + a[i][j];
            }
        }
        cout << dd[n][m] << "\n";
        // for(int i = 1; i <= n; i++){
        //     for(int j = 1; j <= m; j++){
        //         cout << dd[i][j] << " ";
        //     }
        //     cout << endl;
        // }
    }
}