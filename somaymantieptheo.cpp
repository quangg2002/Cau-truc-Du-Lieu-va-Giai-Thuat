#include <bits/stdc++.h>
using namespace std;

int main() {
    long long a, b;
    cin >> a >> b;
    queue < long long > q;
    q.push(4);
    q.push(7);
    vector < long long > v;
    while(1) {
        long long x = q.front();
        v.push_back(x);
        if (x > 1e9) break;
        q.pop(); 
        q.push(x * 10 + 4); 
        q.push(x * 10 + 7);
    }
    long long kq = 0, vt, cnt;
    vt = lower_bound(v.begin(), v.end(), a) - v.begin();
    while(a <= b){
        cnt = min(v[vt], b) - a + 1;
        a = v[vt] + 1;
        kq += cnt * v[vt++];
    }
    cout << kq;
}