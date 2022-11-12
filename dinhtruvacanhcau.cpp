#include <bits/stdc++.h>
using namespace std;
int dd[1005], n, c, d, sdt = 0, bd;
vector < vector < int > > v(1005);

void dfs(int dinh){
    dd[dinh] = 1;
    for(int i = 0; i < v[dinh].size(); i++){
        if(!dd[v[dinh][i]]) dfs(v[dinh][i]);
    }
}
int stplt(){
    int slt = 0;
    for(int i = 1; i <= n; i++){
        if(!dd[i]){
            slt++;
            dfs(i);
        }
    }
    return slt;
}
int canhcau(){
    int dem = 0;
    for(int i = 1; i <= n; i++){
        for(int j = 0; j < v[i].size(); j++){
            memset(dd, 0, sizeof(dd));
            int k = v[i][j];
            v[i].erase(v[i].begin() + j);
            dfs(i);
            if(stplt() + 1 > bd) dem++; 
            v[i].insert(v[i].begin() + j, k);
        }
    }
    return dem;
}
int dinhtru(int x){
    memset(dd, 0, sizeof(dd));
    dd[x] = 1;
    if(x == 1) dfs(2);
    else dfs(1);
    return stplt() + 1;
}


int main(){
    cin >> n >> c;
    for(int i = 0; i < c; i++){
        int x, y;
        cin >> x >> y;
        v[x].push_back(y);
        v[y].push_back(x);
    }
    bd = stplt();
    for(int i = 1; i <= n; i++){
        if(dinhtru(i) > bd) sdt ++;
    }
    cout << sdt << " " << canhcau() / 2;
}
