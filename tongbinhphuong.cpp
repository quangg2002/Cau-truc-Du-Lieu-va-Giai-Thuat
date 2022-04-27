#include<bits/stdc++.h>
using namespace std;

int f[10005];
int main(){
    int t, n;
    cin >> t;
    while(t--){
        cin >> n;
//        f[1] = 1; f[2] = 2; f[3] = 3;
//        for chạy từ 4
        for(int i = 1; i <= 10000; i++){
            f[i] = i;
            for(int j = 1; j <= sqrt(i); j++){
                f[i] = min(f[i], f[i - j * j] + 1);
            }
        }
        cout << f[n] << "\n";
    }
}