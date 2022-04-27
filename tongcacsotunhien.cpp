#include <bits/stdc++.h>
using namespace std;

int n, a[100];
vector < vector < int > > v;
void ql(int sum, int t, int vt){
    if(sum == n){
        vector< int > res (a, a + t);
        v.push_back(res);
    }
    for(int j = vt; j >= 1; j--){
        if(sum + j <= n){
            a[t] = j;
            ql(sum + j, t + 1, j);
        }
    }
}

int main(){
    int t;
    cin >> t;
    while(t--){
        v.clear();
        cin >> n;
        ql(0, 0, n);
        cout << v.size() << "\n";
        for(auto x : v){
            cout << "(";
            for(int i = 0; i < x.size(); i++){ 
                cout << x[i];
                cout << (i == x.size() - 1 ? ")" : " ");
            }
            cout << " ";
        }
        cout << "\n";
    }
}