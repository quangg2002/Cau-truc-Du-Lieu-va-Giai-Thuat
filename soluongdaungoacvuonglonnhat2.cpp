#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    s = "1" + s;
    stack < int > st;
    int dd[1005] = {0}, dem = 0, cnt = 0;
    for(int i = 0 ;i < s.size(); i++){
        if(s[i] == ']') dem++;
        dd[i] = dem;
    }
    st.push(0);
    for(int i = 1; i < s.size(); i++){
        if(s[i] == '(' || s[i] == '[') st.push(i);
        else{
            if(!st.empty() && ((s[st.top()] == '(' && s[i] == ')') || (s[st.top()] == '[' && s[i] == ']'))){
                st.pop();
                if(!st.empty()){
                    cnt = max(cnt, dd[i] - dd[st.top()]);
                }
                else st.push(i);
            }
            else st.push(i);
        }
    }
    cout << cnt;
}