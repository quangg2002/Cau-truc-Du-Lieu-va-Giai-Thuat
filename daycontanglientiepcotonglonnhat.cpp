#include<bits/stdc++.h>
using namespace std;

int main(){
    int t, n;
    cin >> t;
    while(t--){
        cin >> n;
        int a[n + 5];
        for(int i = 0; i < n; i++) cin >> a[i];
        int s = INT_MIN, e = 0;
        for(int i = 0; i < n; i++){
            e = max(a[i], e + a[i]);
            s = max(s, e);
        }
        cout << s << endl;
    }
}