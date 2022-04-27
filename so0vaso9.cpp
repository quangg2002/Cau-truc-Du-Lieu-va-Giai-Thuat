#include<bits/stdc++.h>
using namespace std;

int main(){
    int t, n, d;
    cin >> t;
    while(t--){
        cin >> n;
        d = 0;
        queue < string > q;
        q.push("9");
        while(stoi(q.front()) % n != 0){
            string x = q.front();
            q.pop();
            q.push(x + "0");
            q.push(x + "9");
        }
        cout << q.front();
        cout << endl;
    }
}