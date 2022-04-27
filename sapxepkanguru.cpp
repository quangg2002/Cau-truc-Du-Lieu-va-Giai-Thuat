#include<bits/stdc++.h>
using namespace std;

int main(){
	int t, n, d;
	cin >> t;
	while(t--){
		cin >> n;
		int a[n +5];
		for(int i = 0; i < n; i++) cin >> a[i];
		sort(a, a + n);
		int l = n/2 - 1, r = n - 1;
		d = n;
		while(l >= 0 && r >= n/2){
			if(a[l] * 2 <= a[r]){
				l--;
				r--;
				d--;
			}
			else l--;
		}
		cout << d << "\n";
	}
}
