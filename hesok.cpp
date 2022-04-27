#include<bits/stdc++.h>
using namespace std;

int k;
string a, b;
string xuly(){
    string s = "";
    int du = 0;
    for(int i = a.size() - 1; i >= 0; i--){
        int tong = a[i] - '0' + b[i] - '0' + du;
        s = char (tong % k + '0') + s;
        du = tong / k;
    }
    if(du > 0) s = '1' + s;
    return s;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        cin >> k >> a >> b;
        while(a.size() < b.size()) a = '0' + a;
        while(b.size() < a.size()) b = '0' + b;
        cout << xuly() << endl;
    }
}