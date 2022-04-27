#include<bits/stdc++.h>
using namespace std;

int main(){
    int t, n;
    cin >> t;
    while(t--){
        cin >> n;
        queue < int > q;
        while(n--){
            int x;
            cin >> x;
            if(x == 1) cout << q.size() << "\n";
            else if(x == 2){
                cout << (q.empty() ? "YES" : "NO") << endl;
            }
            else if(x == 3){
                int y;
                cin >> y;
                q.push(y);
            }
            else if(x == 4){
                if(!q.empty()) q.pop();
            }
            else if(x == 5){
                cout << (q.empty() ? -1 : q.front()) << endl;
            }
            else if(x == 6){
                cout << (q.empty() ? -1 : q.back()) << endl;
            }
        }
    }
}