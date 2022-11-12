#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        string s, a = "";
        cin >> s;
        stack < char > st;
        for(int i = 0; i < s.size(); i++){
            if(s[i] != ']'){
                st.push(s[i]);
            }
            else{
                string x = "", cnt = "", lap = "";
                while(!st.empty() && st.top() != '['){
                    x = st.top() + x;
                    st.pop();
                }
                st.pop();
                while(!st.empty() && st.top() >= '0' && st.top() <= '9'){
                    char a = st.top();
                    lap = a + lap;
                    st.pop();
                }
                if(lap.size() == 0) lap = "1";
                for(int i = 0; i < stoi(lap); i++) cnt = x + cnt;
                for(int i = 0; i < cnt.size(); i++) st.push(cnt[i]);
            }
        }
        while(!st.empty()){
            a += st.top();
            st.pop();
        }
        reverse(a.begin(), a.end());
        cout << a << endl;
    }
}