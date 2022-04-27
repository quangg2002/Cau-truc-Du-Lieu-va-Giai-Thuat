#include <bits/stdc++.h>
using namespace std;

int main(){
    int t, n;
    cin >> t;
    while(t--){
        cin >> n;
        map < int, int > mp;
        pair < int, int > p;
        queue < pair < int, int > > q;
        p.first = n;
        p.second = 0;
        q.push(p);
        while(1){
            p = q.front();
            q.pop();
            if(p.first == 1){
                cout << p.second << endl;
                break;
            }
            for(int i = 2; i <= sqrt(p.first); i++){
                if(p.first % i == 0 && !mp[p.first / i]){
                    mp[p.first / i] ++;
                    q.push({p.first / i, p.second + 1});
                }
            }
            q.push({p.first - 1, p.second + 1});
        }
    }
}