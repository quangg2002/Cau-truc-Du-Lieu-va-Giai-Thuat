#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, k;
    cin >> n >> k;
    int a[n + 5];
    for(int i = 0; i < n; i++) cin >> a[i];
    sort(a, a + n);
    int d = 1;
    for(int i = 0; i < n - 1; i++) if(a[i + 1] - a[i] > k) d++;
    cout << d;
}