#include<bits/stdc++.h>
using namespace std;

long long mod=pow(10,9)+7;
int main(){
	int t, n;
	cin >> t;
	while(t--){
		cin >> n;
		int a[n+5];
		for(int i = 0; i < n; i++) cin >> a[i];
		sort(a,a + n);
		long long sum  = 0;
		for(int i = 0; i < n; i++){
			sum += a[i] * i;
			if(sum > mod) sum %= mod;
		}
		cout << sum << endl;
	}
}
