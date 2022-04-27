#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        stack < long long > st;
        long long  y = 0;
        for(int i = s.size(); i >= 0; i--){
            if(s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/' || s[i] == '^' || s[i] == '%'){
                long long a = st.top();
                st.pop();
                long long b = st.top();
                st.pop();
                long long x;
                if(s[i] == '+') x = a + b;
                else if(s[i] == '-') x = a - b;
                else if(s[i] == '*') x = a * b;
                else if(s[i] == '/') x = a / b;
                else if(s[i] == '^') x = a ^ b;
                else if(s[i] == '%') x = a % b;
                st.push(x);
            }
            else st.push((long long) (s[i] - '0'));
        }
        cout << st.top() << "\n";
    }
}