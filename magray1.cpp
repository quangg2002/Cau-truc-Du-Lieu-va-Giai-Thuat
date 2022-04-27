#include<bits/stdc++.h>
using namespace std;

int n, a[100];
void in(){
    cout << a[1];
    for(int i = 2; i <= n; i++){
        int s = a[i] ^ a[i - 1];
        cout << s;
    }
    cout << " ";
}
void ql(int i){
    for(int j = 0; j <= 1; j++){
        a[i] = j;
        if(i == n) in();
        else ql(i + 1);
    }
}

int main(){
    int t;
    cin >> t;
    while(t--){
        cin >> n;
        ql(1);
        cout << endl;
    }
}