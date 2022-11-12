#include<bits/stdc++.h>
using namespace std;

vector < vector < int > > v(1005);
int dd[1005], truoc[1005];
int bd, kt;

int dfs(int dinh){
    dd[dinh] = 1;
    for(auto x : v[dinh]){
        if(!dd[x]){
            truoc[x] = dinh;
            if(dfs(x)) return 1;
        }
        else if(x != truoc[dinh] && x == 1){
            bd = x;
            kt = dinh;
            return 1;
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
        memset(truoc, 0, sizeof(truoc));
        for(int i = 0; i < c; i++){
            int x, y;
            cin >> x >> y;
            v[x].push_back(y);
            v[y].push_back(x);
        }
        for(int i = 1; i <= n; i++)    sort(v[i].begin(), v[i].end());
        if(dfs(1)){
            ok = 1;
            vector < int > a;
            a.push_back(bd);
            while(kt != bd){
                a.push_back(kt);
                kt = truoc[kt];
            }
            a.push_back(bd);
            reverse(a.begin(), a.end());
            for(int x : a) cout << x << " ";
        }
        if(!ok) cout << "NO";
        cout << endl;
    }
}