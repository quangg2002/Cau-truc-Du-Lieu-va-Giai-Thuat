#include<bits/stdc++.h>
using namespace std;

int main(){
    int t, n, c;
    cin >> t;
    while(t--){
        cin >> n >> c;
        vector < int > v[1005];
        for(int i = 0; i < c; i++){
            int x, y;
            cin >> x >> y;
            v[x].push_back(y);
        }
        for(int i = 1; i <= n; i++){
            cout << i << ": ";
            for(int x : v[i]){
                cout << x << " ";
            }
            cout << endl;
        }
    }
}
