#include<bits/stdc++.h>
using namespace std;

int n, a[100005];
int main(){
    int t;
    cin >> t;
    while(t--){
        cin >> n;
        for(int i = 1; i <= n; i++) cin >> a[i];
        stack < int > st;
        st.push(0);
        for(int  i = 1; i <= n; i++){
            while(st.size() > 1 && a[st.top()] <= a[i]) st.pop();
            cout << i - st.top() << " ";
            st.push(i);
        }
        cout << endl;
    }
}