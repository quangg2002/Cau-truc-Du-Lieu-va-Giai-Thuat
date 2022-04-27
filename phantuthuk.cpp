#include<bits/stdc++.h>
using namespace std;


int main(){
	int t, m, n, k, x;
	cin >> t;
	while(t--){
		cin >> m >> n >> k;
		int a[m + 5], b[n + 5];
		for(int i = 0; i < m ; i++) cin >> a[i];
		for(int i = 0; i < n ; i++) cin >> b[i];
		int vt1 = 0, vt2 = 0;
		while(k--){
			if(a[vt1] < b[vt2]){
				x = a[vt1];
				vt1 ++;
			}else{
				x = b[vt2];
				vt2 ++;
			}
			if(vt1 == m - 1) x = b[vt2++];
			if(vt2 == n - 1) x = a[vt1++];
		}
		cout << x << endl;
	}
}
