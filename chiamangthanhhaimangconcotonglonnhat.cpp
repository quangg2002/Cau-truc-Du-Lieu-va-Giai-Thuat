#include<bits/stdc++.h>
using namespace std;

int main(){
	int t, n, k, s1, s2;
	cin >> t;
	while(t--){
		cin >> n >> k;
		int a[n + 5];
		for(int i = 0; i < n; i++) cin >> a[i];
		int vt = min(k, n - k);
		sort(a, a + n);
		s1 = 0;		s2 = 0;
		for(int i = 0; i < n; i++){
			if(i < vt) s1 += a[i];
			else s2 += a[i];
		}
		cout << s2 - s1 << endl;
	}
}
