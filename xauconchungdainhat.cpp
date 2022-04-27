#include<bits/stdc++.h>
using namespace std;

int c[1005][1005];
int main(){
    int t;
    cin >> t;
    while(t--){
        memset(c, 0, sizeof(c));
        string a, b;
        cin >> a >> b;
        for(int i = 0; i < a.size(); i++){
            for(int j = 0; j < b.size(); j++){
                if(a[i] == b[j]){
                    c[i+1][j+1] = c[i][j] + 1;
                }
                else c[i + 1][j + 1] = max(c[i][j + 1], c[i + 1][j]);
            }
        }
        cout << c[a.size()][b.size()] << "\n";
    }
}