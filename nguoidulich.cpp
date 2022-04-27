#include<bits/stdc++.h>
using namespace std;

long long a[20][20], s = 0, tong = 1e15;
int b[20], dd[20] = {0}, n;
void ql(int i){
    for(int j = 2; j <= n; j++){
        if(dd[j] == 0){
            b[i] = j;
            dd[j] = 1;
            s += a[b[i - 1]][j];
            if(i == n && s + a[j][1] < tong)    tong = s + a[j][1];
            else if(s < tong && i < n) ql(i + 1);
            s -= a[b[i - 1]][j];
            dd[j] = 0;
        }
    }
}

int main(){
    cin >> n;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cin >> a[i][j];
        }
    }
    b[1] = 1;
    ql(2);
    cout << tong << endl;
}