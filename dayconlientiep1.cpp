#include <bits/stdc++.h>
using namespace std;
void kt(vector<long long> &a,int n,double sum){
    double k = 0;
    long long l = 0, r = n - 1, vt = 0;
    while(l < r){
        if(sum/n > k){
            k = sum/n;
            vt = r - l + 1;
        }
        if(a[l] > a[r]){
            sum -= a[r];
            r--;
        }else{
            sum -= a[l];
            l++;
        }
        n--;
    }
    cout << vt;
}
int main() {
    long long n;
    cin >> n;
    vector < long long > a(n);
    double sum = 0;
    for(long long i = 0;i < n; i++){
        cin >> a[i];
        sum += a[i];
    }
    kt(a, n, sum);
}