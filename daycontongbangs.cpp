#include<bits/stdc++.h>
using namespace std;

long long a[100], sum;
int n, x[100], c = INT_MAX, dd[1005] ={0};
void ql(long long s, int d, int v){
    if(s == sum){
        c = min(c, d);
    }
    for(int i = v; i < n; i++){
        if(s + a[i] <= sum){
            x[d] = a[i];
            ql(s + a[i], d + 1, i + 1);
        }
    }
}
int main(){
    cin >> n >> sum;
    for(int i = 0; i < n; i++) cin >> a[i];
    ql(0, 0, 0);
    if(c == INT_MAX) cout << "-1";
    else cout << c;
}