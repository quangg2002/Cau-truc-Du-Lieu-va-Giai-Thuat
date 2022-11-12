#include<bits/stdc++.h>
using namespace std;

vector < vector < int > > v1, v2;

// bán bậc vào bằng bán bậc ra.

int main(){
    int t, n, c, ok;
    cin >> t;
    while(t--){
        cin >> n >> c;
        ok = 0;
        v1.clear();
        v2.clear();
        v1.resize(1005);
        v2.resize(1005);
        for(int i = 0; i < c; i++){
            int x, y;
            cin >> x >> y;
            v1[x].push_back(y);
            v2[y].push_back(x);
        }
        for(int i = 1; i <= n; i++){
            if(v1[i].size() != v2[i].size()){
                cout << "0\n";
                ok = 1;
                break;
            }
        }
        if(!ok) cout << 1 << endl; 
    }
}