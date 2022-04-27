#include<bits/stdc++.h>
using namespace std;

string xoangoac(string s){
    stack < char > st;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == '('){
            if(s[i - 1] == '-' || s[i - 1] == '+') st.push(s[i - 1]);
            if(s[i - 1] == '(' && !st.empty()) st.push(st.top());
        }
        if(!st.empty() && st.top() == '-'){
            if(s[i] == '+') s[i] = '-';
            else if(s[i] == '-') s[i] = '+';
        }
        if(s[i] == ')' && !st.empty()) st.pop(); 
    }
    string x = "";
    for(int i = 0; i < s.size(); i++){
        if(s[i] != '(' && s[i] != ')') x += s[i];
    }
    return x;
}
int kt(string s1, string s2){
    if(s1 == s2) return 1;
    return 0;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        string s1, s2;
        cin >> s1 >> s2;
    //    cout << xoangoac(s1) << "\n";
    //    cout << xoangoac(s2) << "\n";
        cout << (kt(xoangoac(s1), xoangoac(s2)) ? "YES" : "NO") << endl;
    }
}
