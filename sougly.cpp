#include<bits/stdc++.h>
using namespace std;

int main(){
    int t, n;
    cin >> t;
    set < long long > st;
    vector < long long > v;
    st.insert(1);
    while(1){
        for(auto x : st){
            if(x > 1e18) break;
            v.push_back(x * 2);
            v.push_back(x * 3);
            v.push_back(x * 5);
        }
        for(auto y : v) st.insert(y);
        v.clear();
        if(st.size() > 1e4) break;
    }
    for(auto x : st) v.push_back(x);
    while(t--){
        cin >> n;
        cout << v[n - 1] << "\n";
    }
}