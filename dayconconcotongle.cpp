#include<bits/stdc++.h>
using namespace std;
int a[20], c[20], ok = 1, n, sum = 0;
vector<vector<int> > vt;
vector<int> v;
int ngto(int n){
	if(n < 2) return 0;
	for(int i = 2; i <= sqrt(n); i++) if(n % i == 0) return 0;
	return 1;
}
void sinh(){
    int i = n;
    while(i > 0 && a[i] == 1){
        a[i] = 0;
        sum -= c[i];
        i--;
    }
    if(i == 0){
        ok = 0;
        return;
    }
    a[i] = 1;
    sum += c[i];
}
int main(){
    int t;
    cin >> t;
    while(t--){
        ok = 1;
        sum = 0;
        memset(a, 0, sizeof(a));
        vt.clear();
        cin >> n;
        for(int i = 1; i <= n; i++){
            cin >> c[i];
        }
        sort(c + 1, c + n + 1, greater<int>());
        while(ok){
            v.clear();
            if(ngto(sum)){
                for(int i = 1; i <= n; i++){
                    if(a[i]) v.push_back(c[i]);
                }
                vt.push_back(v);
            }
            sinh();
        }
        for(int i = 0; i < vt.size(); i++){
            for(int j = 0; j < vt[i].size(); j++) cout << vt[i][j] << ' ';
            cout << '\n';
        }
    }
}
