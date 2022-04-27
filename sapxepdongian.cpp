#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, d = 0;
    cin >> n;
    vector < int > v(n + 5), vv(n + 5);
    for(int i = 1; i <= n; i++) cin >> v[i];
    for(int i = 1; i <= n; i++){
        vv[v[i]] = vv[v[i] - 1] + 1;
        d = max(d, vv[v[i]]);
    }
    cout << n - d;
}