#include<bits/stdc++.h>
using namespace std;

int main(){
    int t, n, m;
    cin >> t;
    while(t--){
        cin >> n >> m;
        int a[n + 5][m + 5], dd[n + 5][m + 5], hv = -1;
        memset(dd, 0, sizeof(dd));
        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= m; j++) cin >> a[i][j];
        }
        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= m; j++){
                if(a[i][j] == 1){
                    dd[i][j] = min(dd[i - 1][j], min(dd[i - 1][j - 1], dd[i][j - 1])) + 1;
                    hv = max(dd[i][j], hv);
                }
                else dd[i][j] = 0;
            }
        }
        cout << hv << "\n";
        // for(int i = 0; i <= n; i++){
        //     for(int j = 0; j <= m; j++) cout << dd[i][j] << " ";
        //     cout << "\n";
        // }
    }
}