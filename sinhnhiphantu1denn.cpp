#include<bits/stdc++.h>
using namespace std;

int main(){
    int t, n, d;
    cin >> t;
    while(t--){
        cin >> n;
        d = 0;
        queue < string > q;
        q.push("1");
        while(d < n){
            cout << q.front() << " ";
            string x = q.front();
            q.pop();
            q.push(x + "0");
            q.push(x + "1");
            d++;
        }
        cout << endl;
    }
}