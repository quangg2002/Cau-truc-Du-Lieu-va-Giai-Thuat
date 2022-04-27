#include<bits/stdc++.h>
using namespace std;

int cmp(pair <int, int> a, pair <int, int> b){
    return b.second > a.second;
}
int main(){
    int t, n, d;
    cin >> t;
    while(t--){
        cin >> n;
        int a[n + 5], dd[n + 5];
        vector < pair < int, int > > p(n);
        d = 1;
        for(int i = 0; i < n; i++) cin >> p[i].first >> p[i].second;
        sort(p.begin(), p.end(), cmp);
        for(int i = 0; i < n; i++){
            dd[i] = 1;
            for(int j = 0; j < i; j++){
                if(p[i].first > p[j].second  && dd[i] < dd[j] + 1) dd[i] = dd[j] + 1;
            }
            d = max(d, dd[i]);
        }
        cout << d << "\n";
    }
}