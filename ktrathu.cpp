#include<bits/stdc++.h>
using namespace std;

int dodai(string s){
    int cnt = 0,  dem = 0, l = s.size();
    for(int i = 0; i < l; i++){
        if(s[i] == '('){
            dem ++;
            cnt = max(dem, cnt);
        }
        else if(s[i] == ')'){
            if(dem > 0) dem--;
            else return -1;
        }
    }
    if(dem != 0) return -1;
    return cnt;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        cout << dodai(s) << endl;
    }
}