#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        vector < int > v;
        for(auto x : s) v.push_back(x - '0');
        long long sum = 0;
        for(int i = 0; i < v.size(); i++){
            long long t = 0;
            for(int j = i; j < v.size(); j++){
                t = t * 10 + v[j];
            //    cout <<  t << " ";
                sum += t;
            }
        }
        cout << sum << "\n";
    }
}