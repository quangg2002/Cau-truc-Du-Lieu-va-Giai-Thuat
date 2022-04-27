#include<bits/stdc++.h>
using namespace std;

int main(){
    int t, n;
    cin >> t;
    while(t--){
        cin >> n;
        int a[n + 5], b[n + 5];
        for(int i = 0; i < n; i++) cin >> a[i];
        stack < int > st;
        st.push(0);
        b[0] = 1;
        for(int i = 0; i < n; i++){
            while(!st.empty() && a[st.top()] <= a[i]) st.pop();
            if(!st.empty()) b[i] = i - st.top();
            else b[i] = i + 1;
            st.push(i);
        }
        for(int i = 0; i < n; i++) cout << b[i] << " ";
        cout << endl;
    }
}