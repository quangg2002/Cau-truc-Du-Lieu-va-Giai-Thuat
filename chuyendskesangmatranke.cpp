#include<bits/stdc++.h>
using namespace std;

int v[1005][1005];
int main(){
    int n;
    cin >> n;
    cin.ignore();
    string s, t;
    for(int i = 1; i <= n; i++){
        getline(cin, s);
        stringstream p(s);
        while(p >> t){
            v[i][stoi(t)] = 1;
        }
    }
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cout << v[i][j] << " ";
        }
        cout << "\n";
    }
}