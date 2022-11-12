#include<bits/stdc++.h>
using namespace std;

vector < vector < int > > v;

//chu trình thì bậc của các đỉnh đều là đỉnh chẵn, đường đi khi có 2 bậc lẻ.

int main(){
    int t, n, c, ok;
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
            v[y].push_back(x);
        }
        for(int i = 1; i <= n; i++)   if(v[i].size() % 2 != 0) ok++;
        if(ok == 0) cout << "2\n";
        else if(ok == 2) cout << "1\n";
        else cout << "0\n";
    }
}