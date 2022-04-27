#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        string s1, s2;
        cin >> s1 >> s2;
        int n = s1.size(), m = s2.size();
        s1 = ' ' + s1;
        s2 = ' ' + s2;
        int dd[n + 5][m + 5];
        for(int i = 0; i < s2.size(); i++) dd[0][i] = i;
        for(int i = 0; i < s1.size(); i++) dd[i][0] = i;
        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= m; j++){
                if(s1[i] == s2[j]) dd[i][j] = dd[i - 1][j - 1];
                else dd[i][j] = 1 + min(dd[i - 1][j], min(dd[i - 1][j - 1], dd[i][j - 1]));
            }
        }
        cout << dd[n][m] << "\n";
    }
}