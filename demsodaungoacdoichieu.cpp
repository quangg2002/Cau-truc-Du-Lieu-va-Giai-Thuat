#include<bits/stdc++.h>
using namespace std;

int main(){
    int t, d;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        d = 0;
        if(s[0] == ')') s[0] = '(', d++;
        if(s[s.size() - 1] == '(') s[s.size() - 1] = ')', d++;
        stack < char > st;   
        for(int i= 0 ; i < s.size(); i++){
            if(s[i] == '(') st.push(s[i]);
            else{
                if(!st.empty() && st.top() == '(') st.pop();
                else if(st.empty()) d++ , st.push('(');
            }
        }
        cout << (st.empty() ? d : d + (st.size() / 2)) << "\n";
    }
}