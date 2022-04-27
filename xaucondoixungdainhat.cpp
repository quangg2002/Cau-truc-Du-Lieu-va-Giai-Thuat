#include<bits/stdc++.h>
using namespace std;

int dd[1005][1005];
int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        memset(dd, 0, sizeof(dd));
        int d = 1;
        for(int i = 0; i < s.size(); i++) dd[i][i] = 1;
        for(int k = 1; k < s.size(); k++){
            for(int i = 0; i < s.size() - k; i++){
                int j = i + k;
                if(s[i] == s[j] && k > 1) dd[i][j] = dd[i + 1][j - 1];
                else if(s[i] == s[j] && k == 1)  dd[i][j] = 1;
                else dd[i][j] = 0;
                if(dd[i][j]) d = max(d, j - i + 1);
            }
        }
        // for(int i = 0; i < s.size(); i++){
        //     for(int j = 0; j < s.size(); j++) cout << dd[i][j] << " ";
        //     cout << "\n";
        // }
        cout << d << "\n";
    }
}