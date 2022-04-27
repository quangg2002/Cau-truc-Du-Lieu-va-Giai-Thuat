#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		long long n, x;
		cin >> n >> x;
		long long a[n+5];
		for(int i = 0; i < n; i++) cin >> a[i];
		int vt = upper_bound(a, a + n, x) - a;
		if(vt == 0) cout << "-1\n";
		else cout << vt << "\n";
	}
}
