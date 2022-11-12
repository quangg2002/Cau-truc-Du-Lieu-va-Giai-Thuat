#include<bits/stdc++.h>
using namespace std;

vector < vector < int > > v(1005);
int color[1005];

int dfs(int dinh){
    color[dinh] = 1;
    for(auto x : v[dinh]){
        if(color[x] == 0){
            if(dfs(x)) return 1;
        }
        else if(color[x] == 1) return 1;
    }
    color[dinh] = 2;
    return 0;
}

int main(){
    int t, n, c, ok;
    cin >> t;
    while(t--){
        cin >> n >> c;
        v.clear();
        v.resize(1005);
        ok = 0;
        for(int i = 0; i < c; i++){
            int x, y;
            cin >> x >> y;
            v[x].push_back(y);
        }
        for(int i = 1; i <= n; i++){
            memset(color, 0, sizeof(color));
            if(dfs(i)){
                ok = 1;
                break;
            }
        }
        cout << (ok ? "YES\n" : "NO\n");
    }
}