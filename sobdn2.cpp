#include<bits/stdc++.h>
using namespace std;

int main(){
    int t, n, d;
    cin >> t;
    while(t--){
        cin >> n;
        queue < long long > q;
        q.push(1);
        while(q.size()){
            long long x = q.front();
            if(x % n == 0){
                cout << x << endl;
                break;
            }
            q.pop();
            q.push(x * 10);
            q.push(x * 10 + 1);
        }
    }
}