#include<bits/stdc++.h>
using namespace std;

vector < vector < int > > v(1005);
int n, dd[1005], truoc[1005];

int dfs(int dinh){
    dd[dinh] = 1;
    for(int i = 0; i < v[dinh].size(); i++){
        int k = v[dinh][i];
        if(!dd[k]){
            truoc[k] = dinh;
            if(dfs(k)) return 1;
        }
        else if(truoc[dinh] != k) return 1;
    }
    return 0;
}

string kt(){
    for(int i = 1; i <= n; i++){
        memset(dd, 0, sizeof(dd));
        if(dfs(i)) return "NO";
    }
    return "YES";
}

int main(){
    int t;
    cin >> t;
    while(t--){
        cin >> n;
        v.clear();
        v.resize(1005);
        memset(dd, 0, sizeof(dd));
        memset(truoc, 0, sizeof(truoc));
        for(int i = 0; i < n - 1; i++){
            int x, y;
            cin >> x >> y;
            v[x].push_back(y);
            v[y].push_back(x);
        }
        cout << kt() << endl;
    }
}