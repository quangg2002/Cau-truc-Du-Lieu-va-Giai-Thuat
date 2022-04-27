#include<bits/stdc++.h>
using namespace std;

int dd[6] = {0};
vector < int > v;

void ql(int n){
    v.push_back(n);
    for(int i = 0; i <= 5; i++){
        if(!dd[i]){
            dd[i] = 1;
            ql(10 * n + i);
            dd[i] = 0;
        }
    }
}

int main(){
    for(int i = 1; i <= 5; i++){
        dd[i] = 1;
        ql(i);
        dd[i] = 0;
    }
    v.push_back(0);
    sort(v.begin(), v.end());
    int t, l , r;
    cin >> t;
    while(t--){
        cin >> l >> r;
        int k1 = lower_bound(v.begin(), v.end(), l) - v.begin();
        int k2 = lower_bound(v.begin(), v.end(), r) - v.begin();
        if(v[k2] != r) k2--;
        cout << k2 - k1 + 1 << endl;
    }
}