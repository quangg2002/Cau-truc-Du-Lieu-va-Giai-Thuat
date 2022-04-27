#include<bits/stdc++.h>
using namespace std;

int main(){
    int t, n;
    t = 1;
    while(t--){
        cin >> n;
        queue < int > q;
        while(n--){
            string x;
            cin >> x;
            if(x == "PUSH"){
                int t;
                cin >> t;
                q.push(t);
            }
            else if(x == "PRINTFRONT"){
                if(!q.empty()) cout << q.front() << "\n";
                else cout << "NONE\n";
            }
            else if(x == "POP"){
                if(!q.empty()) q.pop();
            }
        }
    }
}