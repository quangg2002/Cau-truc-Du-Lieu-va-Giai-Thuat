#include <bits/stdc++.h>
using namespace std;

int main(){
    int t, n, x;
    cin >> t;
    while(t--){
        cin >> n >> x;
        map < int, int > mp;
        queue < pair < int, int > > q;
        pair < int, int > u;
        u.first = n;
        u.second = 0;
        q.push(u);
        while(q.size()){
            u = q.front();
            if(u.first == x){
                cout << u.second << endl;
                break;
            }
            q.pop();
            if(u.first < x && !mp[u.first * 2]){
                mp[u.first * 2]++;
                q.push({u.first * 2, u.second + 1});
            }
            if(u.first > 1 && !mp[u.first - 1]){
                mp[u.first - 1]++;
                q.push({u.first - 1, u.second + 1});
            }
        }
    }
}