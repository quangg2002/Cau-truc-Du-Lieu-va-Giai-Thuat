#include<bits/stdc++.h>
using namespace std;

int main(){
    int t, n;
    t = 1;
    while(t--){
        cin >> n;
        deque < int > dq;
        while(n--){
            int t;
            string x;
            cin >> x;
            if(x == "PUSHFRONT"){
                cin >> t;
                dq.push_front(t);
            }
            else if(x == "PRINTFRONT"){
                if(!dq.empty()) cout << dq.front() << "\n";
                else cout << "NONE\n";
            }
            else if(x == "POPFRONT"){
                if(!dq.empty()) dq.pop_front();
            }
            else if(x == "PUSHBACK"){
                cin >> t;
                dq.push_back(t);
            }
            else if(x == "PRINTBACK"){
                if(!dq.empty()) cout << dq.back() << "\n";
                else cout << "NONE\n";
            }
            else if(x == "POPBACK"){
                if(!dq.empty()) dq.pop_back();
            }
        }
    }
}