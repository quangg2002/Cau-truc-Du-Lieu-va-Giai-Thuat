#include<bits/stdc++.h>
using namespace std;

int a[15], d;
vector < int > v(205, 0);
set < string > se;
string s;

int check(int c){
    for(int k = 0; k < d; k++){
        if(a[k] == 1 && c == k + 1)   return 0;
    }
    return 1;
}

void ql(int i){
    for(int j = 0; j <= 1; j++){
        a[i] = j;
        if(i == d - 1){
            string s1 = "";
            for(int x = 0; x < s.size(); x++){
                if(check(v[x])) s1 += s[x];
            }
            se.insert(s1);
        }
        else ql(i + 1);
    }
}

int main(){
    getline(cin, s);
    d = 0;
    stack < int > st;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == '('){
            d++;
            st.push(d);
            v[i] = st.top();
        }
        if(s[i] == ')'){
            v[i] = st.top(); 
            st.pop();
        }
    }
    ql(0);
    se.erase(s);
    for(auto x : se) cout << x << endl;
}
