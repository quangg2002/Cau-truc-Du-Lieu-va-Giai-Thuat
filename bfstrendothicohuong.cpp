#include<bits/stdc++.h>
using namespace std;

int main(){
    int t, n, c, d;
    cin >> t;
    while(t--){
        cin >> n >> c >> d;
        int dd[1005];
        vector < int > v[1005];
        memset(dd, 0, sizeof(dd));
        for(int i = 0; i < 1005; i++) v[i].clear();
        for(int i = 0; i < c; i++){
            int x, y;
            cin >> x >> y;
            v[x].push_back(y);
        }
        queue < int > q;
        q.push(d);
        while(!q.empty()){
            int x = q.front();
            q.pop();
            cout << x << " ";
            dd[x] = 1;
            for(int i = 0 ; i < v[x].size(); i++){
                if(!dd[v[x][i]]){
                    dd[v[x][i]] = 1;
                    q.push(v[x][i]);
                }
            }
        }
        cout << endl;
    }
}