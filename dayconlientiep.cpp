#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n + 5], d = -1, ans = -1, dem = 0;
    for(long long i = 0;i < n; i++){
        cin >> a[i];
        d = max(d, a[i]);
    }
    for(int i = 0; i < n; i++){
        if(a[i] == d){
            dem++;
            ans = max(dem, ans);
        }
        else dem = 0;
    }
    cout << ans;
}