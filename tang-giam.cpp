#include<bits/stdc++.h>
using namespace std;

int main(){
//    int t, n;
//    cin >> t;
//    while(t--){
        int n;
        cin >> n;
        int a[n + 5], dd[n + 5] ,d = 0, b[n + 5];
        memset(dd, 0, sizeof(dd));
        for(int i = 0; i < n; i ++) cin >> a[i] >> b[i];
        for(int i = 0; i < n; i++){
            dd[i] = 1;
            for(int j = 0; j < i; j++){
                if(a[i] > a[j] && b[i] > b[j] && dd[i] < dd[j] + 1) dd[i] = dd[j] + 1; 
            }
            d = max(d, dd[i]);
        }
        cout << d;
//    }
}