#include<bits/stdc++.h>
using namespace std;

vector < vector < int > > v(1005);
int mau[1005], dd[1005], n, c, ok;

int dfs(int dinh){
    mau[dinh] = 1;
    for(auto x : v[dinh]){
        if(mau[x] == 0){
            if(dfs(x)) return 1;
        }
        else if(mau[x] == 1) return 1;
    }
    mau[dinh] = 2; //đỉnh đã duyệt xong
    return 0;
}

int kahn(){
    queue < int > q;
    for(int i = 1; i <= n; i++) if(dd[i] == 0) q.push(i);
    int cnt = 0;
    while(!q.empty()){
        int x = q.front();
        q.pop();
        cnt++;
        for(int a : v[x]){
            dd[a]--;
            if(dd[a] == 0) q.push(a);
        }
    }
    if(cnt == n) return 0;
    return 1;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        cin >> n >> c;
        ok = 0;
        v.clear();
        v.resize(1005);
        for(int i = 0; i < c; i++){
            int x, y;
            cin >> x >> y;
            v[x].push_back(y);
            dd[y]++;
        }
        for(int i = 1; i <= n; i++){
            memset(mau, 0, sizeof(mau));
            if(dfs(i)){
                cout << "YES\n";
                ok = 1;
                break;
            }
        }
        if(!ok) cout << "NO\n";
    }
}