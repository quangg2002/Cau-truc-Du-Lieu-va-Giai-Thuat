#include<bits/stdc++.h>
using namespace std;

vector < vector < int > > v;
int dd[1005];
void dfs(int dinh){
    dd[dinh] = 1;
    for(int i = 0; i < v[dinh].size(); i++){
        int k = v[dinh][i];
        if(!dd[k]) dfs(k);
    }
}
int main(){
    int t, n, c;
    cin >> t;
    while(t--){
        cin >> n >> c;
        v.clear();
        v.resize(n + 5);
        for(int i = 0; i < c; i++){
            int x, y;
            cin >> x >> y;
            v[x].push_back(y);
            v[y].push_back(x);
        }
        for(int i = 1; i <= n; i++){
            int kt = 0;
            dd[i] = 1;
            if(i == 1) dfs(2);
            else dfs(1);
            for(int j = 1; j <= n; j++){
                if(!dd[j]){
                    kt = 1;
                    break;
                }
            }
            if(kt) cout << i << " ";
            memset(dd, 0, sizeof(dd));
        }
        cout << endl;
    }
}