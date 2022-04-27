#include<bits/stdc++.h>
using namespace std;

int main(){
    int t, n;
    cin >> t;
    while(t--){
        cin >> n;
        int d = 0;
        queue < string > q;
        q.push("6");
        q.push("8");
        while(d < n){
            string x = q.front();
            q.pop();
            q.push(x + "6");
            q.push(x + "8");
            string y = x;
            reverse(y.begin(), y.end());
            cout << x + y << " ";
            d++;
        }
        cout << "\n";
    }
}