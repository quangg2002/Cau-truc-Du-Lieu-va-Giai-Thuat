#include<bits/stdc++.h>
using namespace std;

vector < vector < int > > v(1005);
int dd[1005], truoc[1005];

int dfs(int dinh){
    dd[dinh] = 1;
    for(auto x : v[dinh]){
        if(!dd[x]){
            truoc[x] = dinh;
            if(dfs(x)) return 1;
        }
        else if(x != truoc[dinh]) return 1;
    }
    return 0;
}

int bfs(int dinh){
    queue < int > q;
    q.push(dinh);
    while(!q.empty()){
        int x = q.front();
        q.pop();
        dd[x] = 1;
        for(int a : v[x]){
            if(!dd[a]){
                q.push(a);
                truoc[a] = x;
            }
            else if(a != truoc[x]) return 1;
        }
    }
    return 0;
}

int main(){
    int t, n, c, ok;
    cin >> t;
    while(t--){
        cin >> n >> c;
        ok = 0;
        v.clear();
        v.resize(1005);
        memset(dd, 0, sizeof(dd));
        for(int i = 0; i < c; i++){
            int x, y;
            cin >> x >> y;
            v[x].push_back(y);
            v[y].push_back(x);
        }
        for(int i = 1; i <= n; i++){
            memset(dd, 0, sizeof(dd));
            if(bfs(i)){
                cout << "YES\n";
                ok = 1;
                break;
            }
        }
        if(!ok) cout << "NO\n";
    }
}