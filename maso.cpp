#include<bits/stdc++.h>
using namespace std;

int n, a[100], b[100];
string s;
void ql(int i){
    for(int j = 1; j <= n; j++){
        a[i] = j;
        if(i == n){
            cout << s;
            for(int k = 1; k <= n; k++) cout << a[k];
            cout << "\n";
        }else ql(i + 1);
    }
}

int main(){
    cin >> n;
    for(int i = 1; i <= n; i++) b[i] = i;
    do{
        s = "";
        for(int i = 1; i <= n; i++){
            s += (char)(b[i] + 'A' - 1);
        }
        ql(1);
    }while(next_permutation(b + 1, b + n + 1));
}