#include<bits/stdc++.h>
using namespace std;

char ql(string s, long long k){
    long long l = s.size();
    if(k < l) return s[k];
    while(2 * l <= k) l*=2;
    if(l == k) return ql(s, l - 1);
    return ql(s, k - l - 1);
}
int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        long long k;
        cin >> s >> k;
        cout << ql(s,k - 1) << endl;
    }
}
