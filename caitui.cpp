#include<bits/stdc++.h>
using namespace std;

int c[1000][10000];
int main(){
    int t, n, v;
    cin >> t;
    while(t--){
        cin >> n >> v;
        int a[n + 5], b[n + 5];
        for(int i = 1; i <= n; i++) cin >> a[i];
        for(int i = 1; i <= n; i++) cin >> b[i];
        for(int i = 1; i <= n ; i++) c[i][0] = 0;
        for(int i = 1; i <= v ; i++) c[0][i] = 0;
        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= v ; j++){
                if(a[i] <= j){
                    c[i][j] = max(c[i - 1][j], c[i - 1][j - a[i]] + b[i]);
                }
                else c[i][j] = c[i - 1][j];
            }
        }
        cout << c[n][v] << "\n";
        memset(c, 0, sizeof(c));
    }
}