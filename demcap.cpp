#include<bits/stdc++.h>
using namespace std;

int d[5];
long long dem (int a[], int m , int x){
	if(x == 0) return 0;
	if(x == 1) return d[0];
	long long sc = d[0] + d[1];
	auto it = upper_bound(a, a + m, x) - a;
	sc += (m - it);
	if(x == 2) sc -= (d[3] +d[4]);
	if(x == 3) sc += d[2];
	return sc;
}
int main(){
	int t, n, m;
	cin >> t;
	while(t--){
		cin >> n >> m;
		int a[n+5], b[m+5];
		long long tsc = 0;
		for(int i = 0;i < n; i++) cin >> a[i];
		for(int i = 0;i < m; i++){
			cin >> b[i];
			if(b[i] < 5) d[b[i]]++;
		}
		sort(b,b+m);
		for(int i = 0;i < n; i++)	tsc += dem(b, m , a[i]);
		cout << tsc << endl;
		memset(d, 0, sizeof(d));
	}
}
/* note: x < y => x^y > y^x
th ngoai le: 0 1 2 3 4.
*/

