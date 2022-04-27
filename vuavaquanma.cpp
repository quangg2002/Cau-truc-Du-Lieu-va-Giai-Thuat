#include<bits/stdc++.h>
using namespace std;

struct vt{
    int x, y, sb;
};
int dxm[] = {1, 2, -1, 2, 1, -2, -1, -2};
int dym[] = {2, 1, 2, -1, -2, 1, -2, -1};
int dxt[] = {-1, 0, 1, 1, 1, 0, -1, -1};
int dyt[] = {-1, -1, -1, 0, 1, 1, 1, 0};

int main(){
    int n;
    cin >> n;
    char a[n + 5][n + 5];
    int dd[20][20] = {};
    struct vt m, t, k, h;
    queue < pair < struct vt, struct vt > > q;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cin >> a[i][j];
            if(a[i][j] == 'M'){
                m.x = i;
                m.y = j;
                m.sb = 0;
            }
            if(a[i][j] == 'T'){
                t.x = i;
                t.y = j;
            }
        }
    }
    //cout << m.x << " " << m.y << " " << m.sb <<   endl;
    //cout << t.x << " " << t.y << endl;
    q.push({m, t});
    while(!q.empty()){
        m = q.front().first;
        q.pop();
        if(m.x == t.x && m.y == t.y){
            cout << m.sb;
            break;
        }
        k.sb = m.sb + 1;
        for(int i = 0; i < 8; i++){
            k.x = m.x + dxm[i];
            k.y = m.y + dym[i];
            h.x = t.x + dxt[i];
            h.y = t.y + dyt[i];
            if(k.x >= 1 && k.x <= n && k.y >= 1 && k.y <= n && !dd[k.x][k.y] && a[k.x][k.y] != '#' && h.x >= 1 && h.x <= n && h.y >= 1 && h.y <= n && !dd[h.x][h.y] && a[h.x][h.y] != '#'){
                dd[k.x][k.y] = 1;
                dd[h.x][h.y] = 1;
                cout << k.x << " " << k.y << " " << k.sb << endl;
                q.push({k, h});
            }
            // if(h.x >= 1 && h.x <= n && h.y >= 1 && h.y <= n && !dd[h.x][h.y] && a[h.x][h.y] != '#'){
            //     dd[h.x][h.y] = 1;
            //     cout << h.x << " " << h.y << " " << h.sb << endl;
                
            // }
        }
    }
}