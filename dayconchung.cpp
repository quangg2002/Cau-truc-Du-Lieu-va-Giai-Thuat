#include<bits/stdc++.h>
using namespace std;

int main(){
	int t, n, m, k;
	cin >> t;
	while(t--){
		cin >> n >> m >> k;
		vector <int> v;
		int a[n + 5], b[m + 5], c[k + 5];
		for(int i = 0; i < n; i++) cin >> a[i];
		for(int i = 0; i < m; i++) cin >> b[i];
		for(int i = 0; i < k; i++) cin >> c[i];
		int  x = 0, y = 0, z = 0;
		while(x < n && y < m && z < k){
			if(a[x] == b[y] && b[y] == c[z]){
				v.push_back(a[x]);
				x++;
				y++;
				z++;
			}
			else if(a[x] < b[y]) x++;
			else if(b[y] < c[z]) y++;
			else z++; 
		}
		if(v.size() != 0)	for(auto a : v) cout << a << " ";
		else cout << "NO";
		cout << endl;
		v.clear();
	}
}
