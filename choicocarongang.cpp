#include<bits/stdc++.h>
using namespace std;

vector < string > v;
int n, a[100];
char c;
int kt(){
    int d1 = 0, d0 = 0, d1m = 0, d0m = 0, s = 0;
    for(int i = 1; i <= n; i++){
        if(a[i] == 1){
            d0 = 0;
            d1 ++;
            d1m = max(d1m, d1);
        }else{
            d0 ++;
            d1 = 0;
            d0m = max(d0m, d0);
        }
    }
    if(d1m > d0m && d1m > 4) return 1;
    return 0;
}
void ql(int i){
    for(int j = 0; j <= 1; j++){
        a[i] = j;
        if(i == n){
            if(kt()){ 
                string s = "";
                if(c == 'X'){
                    for(int k = 1; k <= n; k++){
                        if(a[k]) s += "X";
                        else s += "O";
                    }
                }else{
                    for(int k = 1; k <= n; k++){
                        if(a[k]) s += "O";
                        else s += "X";
                    }
                }
                v.push_back(s);

            }
        }else ql(i + 1);
    }
}

int main(){
    int t;
    cin >> t;
    while(t--){
        cin >> n >> c;
        ql(1);
        sort(v.begin(), v.end());
        for(auto x : v) cout << x << "\n";
        v.clear();
    }
}