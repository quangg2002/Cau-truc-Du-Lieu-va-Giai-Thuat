#include<bits/stdc++.h>
using namespace std;

vector < string > v;
int n,  a[100];
void ql(int i){
    for(int j = 0; j <= 1; j++){
        a[i] = j;
        if(i == n){
            string s = "";
            for(int i = 1; i <= n; i++) s += (char)(a[i] + 'A');
            v.push_back(s);
        }
        else ql(i + 1);
    }
}
int main(){
    int t;
    cin >> t;
    while(t--){
        cin >> n;
        ql(1);
        for(int i = 0; i < v.size(); i++){
            cout << v[i];
            if(i != v.size() - 1) cout << ",";
        }
        cout << endl;
        v.clear();
    }
}