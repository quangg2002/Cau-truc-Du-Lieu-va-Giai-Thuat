#include<bits/stdc++.h>
using namespace std;

int main(){
	int t, n, k;
	cin >> t;
	while(t--){
		cin >> n >> k;
		int a[n + 5];
		long long dem = 0;;
		for(int i = 0; i < n; i++) cin >> a[i];
		sort(a, a + n);
		for(int i = 0; i < n; i++){
			int x = lower_bound(a, a + n, a[i] + k) - a;
			dem += x - i -1;
		}
		cout << dem << "\n";
	}
}
