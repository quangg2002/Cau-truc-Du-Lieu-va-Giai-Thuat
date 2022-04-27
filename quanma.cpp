#include<bits/stdc++.h> 
using namespace std;

struct vt{
    int x, y, sb;
};

int dx[] = {1, 2, -1, 2, 1, -2, -1, -2};
int dy[] = {2, 1, 2, -1, -2, 1, -2, -1};

int main(){
    int t;
    cin >> t;
    while(t--){
        string a, b;
        cin >> a >> b;
        int dd[9][9] = {};
        struct vt u, v, k;
        queue < struct vt > q;
        u.x = a[0] - 'a' + 1;
        u.y = a[1] - '0';
        u.sb = 0;
        v.x = b[0] - 'a' + 1;
        v.y = b[1] - '0';
        q.push(u);
        while(!q.empty()){
            u = q.front();
            q.pop();
            if(u.x == v.x  && u.y == v.y){
                cout << u.sb << endl;
                break;
            }
            k.sb = u.sb + 1;
            for(int i = 0; i < 8; i++){
                k.x = u.x + dx[i];
                k.y = u.y + dy[i];
                if(k.x >= 1 && k.x <= 8 && k.y >= 1 && k.y <= 8 && !dd[k.x][k.y]){
                    dd[k.x][k.y] = 1;
                    q.push(k);
                }
            }
        }
    }
}
