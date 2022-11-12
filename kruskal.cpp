#include<bits/stdc++.h>
using namespace std;

struct dt{
    int d1, d2, ts;
};

int n, c;
vector < dt > v;
int parent[10005];

void make_set(){
    for(int i = 1; i <= n; i++){
        parent[i] = i;
    }
}

int find(int a){
    if(a == parent[a]) return a;
    return find(parent[a]);
}

int Union(int a, int b){
    a = find(a);
    b = find(b);
    if(a == b) return 0;
    parent[b] = a;
    return 1;
}

int cmp(dt a, dt b){
    return a.ts < b.ts;
}

void nhap(){
    cin >> n >> c;
    for(int i = 0; i < c; i++){
        int x, y, z;
        cin >> x >> y >> z;
        dt e;
        e.d1 = x; e.d2 = y; e.ts = z;
        v.push_back(e);
    }
    sort(v.begin(), v.end(), cmp);
}

void kruskal(){
    int d = 0;
    vector < dt > cnt;
    for(int i = 0; i < c; i++){
        if(cnt.size() == n - 1) break;
        dt e = v[i];
        if(Union(e.d1, e.d2)){
            cnt.push_back(e);
            d += e.ts;
        }
    }
    cout << d << endl;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        memset(parent, 0, sizeof(parent));
        v.clear();
        nhap();
        make_set();
        kruskal();
    }
}