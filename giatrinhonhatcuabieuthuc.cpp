#include<bits/stdc++.h>
using namespace std;

int main(){
	int t, n;
	cin >> t;
	while(t--){
		cin >> n;
		long long sum = 0;
		long long a[n + 5], b[n + 5];
		for(int i = 0; i < n; i++) cin >> a[i];
		sort(a, a + n);
		for(int i = 0; i < n; i++) cin >> b[i];
		sort(b, b + n, greater<int>());
		for(int i = 0; i < n; i++) sum += a[i] * b[i];
		cout << sum << endl;
	}
}
