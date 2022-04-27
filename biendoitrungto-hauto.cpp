#include <bits/stdc++.h>
using namespace std;

int uutien(char c){
    if(c == '+' || c == '-') return 1;
    else if(c == '*' || c == '/' || c == '%') return 2;
    else if(c == '^') return 3;
    return -1;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        string s, ans = "";
        cin >> s;
        stack < char > st;
        for(int i = 0; i < s.size(); i++){
            if(s[i] == '(') st.push(s[i]);
            else if(isalpha(s[i])) ans += s[i];
            else if(s[i] == ')'){
                while(!st.empty() && st.top() != '('){
                    ans += st.top();
                    st.pop();
                }
                if(st.top() == '(') st.pop();
            }
            else{
                while(!st.empty() && uutien(s[i]) <= uutien(st.top())){
                    ans += st.top();
                    st.pop();
                }
                st.push(s[i]);
            }
        }
        while(!st.empty()){
            ans += st.top();
            st.pop();
        }
        cout << ans << endl;
    }
}