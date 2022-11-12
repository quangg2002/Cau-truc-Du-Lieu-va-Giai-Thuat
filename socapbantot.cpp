#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, k;
    int d = 0;
    cin >> n >> k;
    vector < int > v;
    int b[100005] = {0};
    int c[100005] = {0};
    for(int i = 0; i < n ; i++){
        string s;
        cin >> s;
        v.push_back(s.size());
    }
    for(int i = 0; i <= k; i++)    b[v[i]]++;
    d += b[v[0]] - 1;
    for(int i = 1; i < n - k; i++){
        b[v[i - 1]]--;
        b[v[i + k]]++;
        d += b[v[i]] - 1;
    }
    for(int i = n - k; i < n; i++)    c[v[i]]++;
    d += c[v[n - k]] - 1;
    for(int i = n - k + 1; i < n ;i++){
        c[v[i - 1]]--;
        c[v[i + k]]++;
        d += c[v[i]] - 1;
    }
    cout  << d;
}
