#include<bits/stdc++.h>
using namespace std;

int main(){
    int t, n, m, s;
    cin >> t;
    while(t--){
        cin >> n >> s >> m;
        if(s * m > (s - s/7) * n) cout << "-1\n";
        else{
            for(int i = 1; i <= (s - s/7); i++){
                if(n * i >= s * m){
                    cout << i << "\n";
                    break;
                }
            }
        }
    }
}