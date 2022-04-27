#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    for(int i = 1; i <= t; i++){
        string s;
        cin >> s;
        s = ' ' + s;
        stack < int > st;
        cout << "Test " << i << ": ";
        for(int i = 1; i <= s.size(); i++){
            if(s[i] == 'D'){
                st.push(i);
            }
            else{
                cout  << i;
                while(!st.empty()){
                    cout << st.top();
                    st.pop();
                }
            }
        }
        cout << endl;
    } 
}