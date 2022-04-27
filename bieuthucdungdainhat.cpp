#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        stack < char > st;
        int ans = 0;
        for(int i = 0; i < s.size(); i++){
            if(!st.empty() && st.top() == '(' && s[i] == ')'){
                ans += 2;
                st.pop();
            }
            if(s[i] == '(') st.push(s[i]);
        }
        cout << ans << endl;
    }
}