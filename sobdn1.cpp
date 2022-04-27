#include<bits/stdc++.h>
using namespace std;

string n;
int kt(string s){
    if(s.size() < n.size() || s.size() == n.size() && s <= n) return 1;
    return 0;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        cin >> n;
        long long d = 0;
        queue < string > q;
        q.push("1");
        while(q.size()){
            string x = q.front();
            q.pop();
            if(kt(x + "0"))      q.push(x + "0");
            if(kt(x + "1"))      q.push(x + "1");
            d++;
        }
        cout << d << endl;
    }
}