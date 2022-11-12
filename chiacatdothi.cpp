#include<bits/stdc++.h>
using namespace std;

vector < vector < int > > v(1005);
int dd[1005], n, c;

void dfs(int dinh){
    dd[dinh] = 1;
    for(int i = 0; i < v[dinh].size(); i++){
        if(!dd[v[dinh][i]]) dfs(v[dinh][i]);
    }
}

int stplt(){
    int lt = 0;
    for(int i = 1; i <= n; i++){
        if(!dd[i]){
            dfs(i);
            lt++;
        }
    }
    return lt;
}

int dinhtru(int x){
    memset(dd, 0, sizeof(dd));
    dd[x] = 1;
    if(x == 1) dfs(2);
    else dfs(1);
    return stplt() + 1;
}

int cmp(pair < int, int > a, pair < int, int > b){
    if(a.first > b.first) return 1;
    if(a.first == b.first){
        return a.second < b.second;
    }
}

int main(){
    int t;
    cin >> t;
    while(t--){
        cin >> n >> c;
        vector < pair < int, int > > p;
        v.clear();
        v.resize(1005);
        memset(dd, 0, sizeof(dd));
        for(int i = 0; i < c; i++){
            int x, y;
            cin >> x >> y;
            v[x].push_back(y);
            v[y].push_back(x);
        }
        
        int bd = stplt();
        for(int i = 1; i <= n; i++){
            if(dinhtru(i) > bd) p.push_back({dinhtru(i), i});
        }
        sort(p.begin(), p.end(), cmp);
        if(p.size() != 0) cout << p[0].second << endl;
        else cout << "0\n";
    }
}