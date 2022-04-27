#include<bits/stdc++.h>
using namespace std;

int mod = 1e9 + 7;
long long p[1005][1005];
int main(){
    int t, n ,k;
    cin >> t;
    while(t--){
        cin >> n >> k;
        for(int i = 1; i <= n; i++) p[i][1] = i;
        for(int i = 2; i <= n; i++){
            for(int j = 2; j <= i; j++){
                p[i][j] = (p[i - 1][j - 1] * i) % mod;
            }
        }
        cout << p[n][k] << "\n";
    }
}