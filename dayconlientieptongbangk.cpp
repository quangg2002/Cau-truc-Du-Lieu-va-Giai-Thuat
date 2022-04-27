#include <bits/stdc++.h>
using namespace std;

int n;
int xuly(int a[], long long k){
    long long s = 0, j = 0;
    for(int i = 0; i < n; i++){
        s += a[i];
        if( s > k){
            while(j < i){
                s -= a[j];
                j++;
                if(s <= k) break; 
            }
        }
        if(s == k) return 1;
    }
    return 0;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        long long k;
        cin >> n >> k;
        int a[n + 5];
        for(int i = 0; i < n; i++) cin >> a[i];
        cout << (xuly(a, k) ? "YES" : "NO") << "\n";
    }
}