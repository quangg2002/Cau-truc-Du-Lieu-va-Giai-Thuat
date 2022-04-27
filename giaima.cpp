#include<bits/stdc++.h>
using namespace std;

int qhd(string s){
    int dd[100];
    if(s[0] == '0') return 0;
    s = ' ' + s;
    memset(dd, 0, sizeof(dd));
    dd[0] = 1; dd[1] = 1;
    for(int i = 2; i < s.size(); i++){
        if(s[i] > '0') dd[i] = dd[i - 1];
        if(s[i - 1] == '1' || s[i - 1] == '2' && s[i] < '7') dd[i] += dd[i - 2]; 
    }
    return dd[s.size() - 1]; 
}

int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        cout << qhd(s) << "\n";
    }
}
// dd[i] số cách mã hóa đến kí tự thứ i.