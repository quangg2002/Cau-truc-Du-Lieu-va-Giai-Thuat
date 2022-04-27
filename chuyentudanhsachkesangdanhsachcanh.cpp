#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    cin.ignore();
    vector < pair < int, int > > v; 
    for(int i = 1; i <= n; i++){
        string s, t;
        getline(cin, s);
        stringstream p(s);
        while(p >> t){
            if(i < stoi(t)){
                v.push_back({i , stoi(t)});
            }
        }
    }
    for(auto x : v){
        cout << x.first << " " << x.second << "\n";
    }
}