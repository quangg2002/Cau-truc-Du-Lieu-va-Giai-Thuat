#include<bits/stdc++.h>
using namespace std;

int main(){
    int t, n, m;
    cin >> t;
    while(t--){
        cin >> n >> m;
        vector < vector < long long  > > dd(n + 1, vector < long long >(m + 1, 1));
        for(int i = n - 1; i >= 0; i--){
            for(int j = m - 1; j >= 0; j--){
                dd[i][j] = dd[i + 1][j] + dd[i][j + 1];
            }
        }
        cout << dd[0][0] << "\n";
    }
}