#include<bits/stdc++.h>
using namespace std;

int kt(string s){
    stack < char > st;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == '(' || s[i] == '[') st.push(s[i]);
        if(s[i] == ')' || s[i] == ']'){
            if(st.empty()) return 0;
            char x = st.top();
            if(!st.empty() && x == '(' && s[i] == ')') st.pop();
            else if(!st.empty() && x == '[' && s[i] == ']') st.pop();
            else return 0;
        }
    }
    if(!st.empty()) return 0;
    return 1;
}

int main(){
    int t;
    cin >> t;
    cin.ignore();
    while(t--){
        string s;
        getline(cin, s);
        cout << (kt(s) ? "YES\n" : "NO\n");
    }
}