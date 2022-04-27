#include<bits/stdc++.h>
using namespace std;

int main(){
    int t, n;
    cin >> t;
    while(t--){
        cin >> n;
        int a[n + 5], dd[n + 5], d = 0;
        for(int i = 0; i < n; i++) cin >> a[i];
        for(int i = 0; i < n; i++){
            dd[i] = 1;
            for(int j = 0; j < i; j++){
                if(a[j] <= a[i] && dd[i] < dd[j] + 1) dd[i] = dd[j] + 1;
            }
            d = max(d, dd[i]);
        }
        cout << n - d << endl;
    }
}