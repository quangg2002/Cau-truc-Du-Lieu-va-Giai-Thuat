#include<bits/stdc++.h>
using namespace std;

int dd[1005];
int di[1005];
vector < int > v[1005];
// void dfs(int dinh){
//     dd[dinh] = 1;
//     for(int i = 0; i < v[dinh].size(); i++){
//         if(!dd[v[dinh][i]]){
//             dfs(v[dinh][i]);
//             di[v[dinh][i]] = dinh;
//         }
//     }
// }
void bfs(int dinh){
    dd[dinh] = 1;
    queue < int > q;
    q.push(dinh);
    while(!q.empty()){
        int x = q.front();
        q.pop();
        for(int i = 0; i < v[x].size(); i++){
            if(!dd[v[x][i]]){
                dd[v[x][i]] = 1;
                q.push(v[x][i]);
                di[v[x][i]] = x;
            }
        }
    }
}

void xuly(int x, int y){
    memset(dd, 0, sizeof(dd));
    memset(di, 0, sizeof(di));
    bfs(x);
    if(!dd[y]){
        cout << "-1" << endl;
    }
    else{
        vector < int > cnt;
        while(y != x){
            cnt.push_back(y);
            y = di[y];
        }
        cnt.push_back(x);
        reverse(cnt.begin(), cnt.end());
        for(auto a : cnt) cout << a << " ";
        cout << endl;
    }
}

int main(){
    int t, n, c, d1, d2;
    cin >> t;
    while(t--){
        cin >> n >> c >> d1 >> d2;
        for(int i = 0; i < 1005; i++) v[i].clear();
        for(int i = 1; i <= c; i++){
            int x, y;
            cin >> x >> y;
            v[x].push_back(y);
        }
        xuly(d1, d2);
    }
}
