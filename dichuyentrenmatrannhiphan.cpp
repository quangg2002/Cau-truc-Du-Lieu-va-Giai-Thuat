#include<bits/stdc++.h>
using namespace std;

string Hex = "0123456789ABCDEF";
int Bin4bits_to_Dec(string s) {
    reverse(s.begin(), s.end());
    int res = 0;
    for (int i = 0; i < 4; i++) if (s[i] == '1') res += pow(2, i);
    return res;
}
void Bin_to_Hex(string s) {
    queue<char> ans;
    while (s.size() % 4 != 0) s = "0" + s;
    for (int i = 0; i < s.size(); i += 4) {
        string tmp = s.substr(i, 4);
        ans.push(Hex[Bin4bits_to_Dec(tmp)]);
    }
    while (ans.size() > 1 && ans.front() == '0') ans.pop();
    while (!ans.empty()) {
        cout << ans.front();
        ans.pop();
    }
}

int main(){
    int n;
    cin >> n;
    int a[n + 5][n + 5];
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cin >> a[i][j];
        }
    }
    string dp[n + 5][n + 5];
    for(int i = 0; i <= n; i++) dp[0][i] = "";
    for(int i = 0; i <= n; i++) dp[i][0] = "";
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            char c = a[i][j] + '0';
            dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]) + c;
        }
    }
    Bin_to_Hex(dp[n][n]);
}