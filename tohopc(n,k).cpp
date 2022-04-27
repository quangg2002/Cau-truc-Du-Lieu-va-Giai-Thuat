#include<bits/stdc++.h>
using namespace std;

int mod = 1e9 + 7;
long long c[1000][1000];
int main(){
    int t, n ,k;
    cin >> t;
    while(t--){
        cin >> n >> k;
        for(int i = 0; i < n + 2; i++){
            for(int j = 0; j < i; j++){
                if(j == 0 || i == j ) c[i][j] = 1;
                else{
                    c[i][j] = (c[i-1][j-1] + c[i-1][j]) % mod;
                }
            //    cout << c[i][j] << " ";
            }
            cout << endl;
        }
        cout << c[n + 1][k] << endl;
    }
}