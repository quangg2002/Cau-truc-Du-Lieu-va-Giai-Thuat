#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    cin.ignore();
    while(t--){
        string s;
        getline(cin, s);
        int ok;
        stack < char > st;
        for(int i = 0; i < s.size(); i++){
            if(s[i] == ')'){
                ok = 1;
                char x = st.top(); st.pop();
                while(x != '('){
                    if(x == '+' || x == '-' || x == '*' || x == '/' || x == '*' || x == '^')    ok = 0;
                    x = st.top();
                    st.pop();
                }
                if(ok) break;
            }
            else st.push(s[i]);
        }
        cout << (ok ? "Yes" : "No") << endl;
    }
}