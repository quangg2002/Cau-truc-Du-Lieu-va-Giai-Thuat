#include<bits/stdc++.h>
using namespace std;

int dd[1005], n, c;
vector < vector < int > > v(1005);

void dfs(int dinh){
    dd[dinh] = 1;
    for(int i = 0; i < v[dinh].size(); i++){
        if(!dd[v[dinh][i]]){
            dd[v[dinh][i]] = 1;
            dfs(v[dinh][i]);
        }
    }
}

void canhcau(){
    for(int i = 1; i <= n; i++){
        for(int j = 0; j < v[i].size(); j++){
            int k = v[i][j];
            v[i].erase(v[i].begin() + j);
            dfs(i);
            int kt = 0;
            for(int h = 1; h <= n; h++) if(!dd[h]) kt = 1;
            if(kt && i < k) cout << i << " " << k << " ";
            v[i].insert(v[i].begin() + j, k);
            memset(dd, 0, sizeof(dd));
        }
    }
}

int main(){
    int t;
    cin >> t;
    while(t--){
        cin >> n >> c;
        v.clear();
        v.resize(1005);
        for(int i = 0; i < c; i++){
            int x, y;
            cin >> x >> y;
            v[x].push_back(y);
            v[y].push_back(x);
        }
        canhcau();
        cout << endl;
    }
}