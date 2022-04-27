#include<bits/stdc++.h>
using namespace std;

int c[105][20005];
int main(){
    int s, n;
    cin >> s >> n;
    int a[n + 5];
    for(int i = 1; i <= n; i++) cin >> a[i];
    for(int i = 1; i <= n; i++) c[i][0] = 0;
    for(int i = 1; i <= n; i++) c[0][i] = 0;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= s; j++){
            if(a[i] <= j){
                c[i][j] = max(c[i-1][j-a[i]] + a[i], c[i-1][j]);
            }else
                c[i][j] = c[i-1][j];
        }
    }
    cout << c[n][s];
}