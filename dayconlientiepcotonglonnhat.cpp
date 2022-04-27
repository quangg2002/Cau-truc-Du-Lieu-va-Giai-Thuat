#include<bits/stdc++.h>
using namespace std;
 
void kt(int a[], int n, long long sum){
    int l = 0, r = n - 1;
    long long k = INT_MIN;
    while(l <= r){
        if(sum > k) k = sum;
        if(a[l] > a[r]){
            sum -= a[r];
            r--;
        }
        else{
            sum -= a[l];
            l++;
        }
    }
    cout << k << endl;
}
 
int main(){
    int t, n;
    cin >> t;
    while(t--){
        cin >> n;
        int a[n+5];
        long long sum = 0;
        for(int i = 0; i < n; i++){
            cin >> a[i];
            sum += a[i];
        }
        kt(a,n,sum);
    }
}