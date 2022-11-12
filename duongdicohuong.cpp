#include<bits/stdc++.h>
using namespace std;

vector < vector < int > > v(1005);
int dd[1005], truoc[1005];

void bfs(int dinh){
    queue < int > q;
    q.push(dinh);
    while(!q.empty()){
        int x = q.front();
        dd[x] = 1;
        q.pop();
        for(int i = 0; i < v[x].size(); i++){
            if(!dd[v[x][i]]){
                dd[v[x][i]] = 1;
                q.push(v[x][i]);
                truoc[v[x][i]] = x;
            }
        }
    }
}

void di(int d1, int d2){
    bfs(d1);
    if(!dd[d2]) cout << "-1\n";
    else{
        vector < int > a;
        while(d2 != d1){
            a.push_back(d2);
            d2 = truoc[d2];
        }
        a.push_back(d1);
        reverse(a.begin(), a.end());
        for(auto x : a) cout << x << " ";
        cout << endl;
    }
}
int main(){
    int t, n, c, d1, d2;
    cin >> t;
    while(t--){
        cin >> n >> c >> d1 >> d2;
        memset(dd, 0, sizeof(dd));
        memset(truoc, 0, sizeof(truoc));
        v.clear();
        v.resize(1005);
        for(int i = 0; i < c; i++){
            int x, y;
            cin >> x >> y;
            v[x].push_back(y);
        }
        di(d1, d2);
    }
}