#include<bits/stdc++.h>
using namespace std;

int main(){
    int t, n;
    cin >> t;
    while(t--){
        cin >> n;
        queue < string > q;
        vector < string > v;
        q.push("6");
        q.push("8");
        while(q.size()){
            string x = q.front();
            if(x.size() > n) break;
            v.push_back(q.front());
            q.pop();
            q.push(x + "6");
            q.push(x + "8");
        }
        reverse(v.begin(), v.end());
        cout << v.size() << endl;
        for(auto x : v) cout << x << " ";
        cout << endl;
    }
}