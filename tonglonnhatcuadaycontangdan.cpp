#include<bits/stdc++.h>
using namespace std;

int main(){
    int t, n;
    cin >> t;
    while(t--){
        cin >> n;
        long long a[n + 5], dd[n + 5];
        for(int i = 0; i < n; i++){
            cin >> a[i];
            dd[i] = a[i];
        }
        long long sum = 0;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < i; j++){
                if(a[j] < a[i] && dd[i] < dd[j] + a[i])  dd[i] = dd[j] + a[i];
            }
            sum = max(sum, dd[i]);
        }
        cout << sum << "\n";
    }
}