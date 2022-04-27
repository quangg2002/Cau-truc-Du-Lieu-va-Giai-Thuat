#include<bits/stdc++.h>
using namespace std;

int dd[1005];
vector < int > v[1005];
void dfs(int dinh){
    dd[dinh] = 1;
    cout << dinh << " ";
    for(int i = 0; i < v[dinh].size(); i++){
        if(!dd[v[dinh][i]])     dfs(v[dinh][i]);
    }
}

int main(){
    int t, n, c, d;
    cin >> t;
    while(t--){
        cin >> n >> c >> d;
        memset(dd, 0, sizeof(dd));
        for(int i = 0; i < 1005; i++) v[i].clear();
        for(int i = 0; i < c; i++){
            int x, y;
            cin >> x >> y;
            v[x].push_back(y);
        }
        dfs(d);
        cout << endl;
    }
}