#include<bits/stdc++.h>
using namespace std;

int main(){
    int t, n, d;
    cin >> t;
    while(t--){
        map < char, int > mp;
        string s;
        cin >> n >> s;
        d = -1;
        for(int i = 0; i < s.size(); i++)  mp[s[i]]++;
        for(auto x : mp) d = max(d, x.second);
        cout << ((d - 1) * n > (s.size() - 1) ? -1 : 1)<< "\n";
        mp.clear();
    }
}