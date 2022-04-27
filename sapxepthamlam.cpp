#include<bits/stdc++.h>
using namespace std;

int main(){
	int t, n, ok;
	cin >> t;
	while(t--){
		cin >> n;
		int a[n+5];
		vector < int > v;
		for(int i = 0; i < n; i++){
			cin >> a[i];
			v.push_back(a[i]);
		}
		sort(v.begin(), v.end());
		ok = 0;
		for(int i = 0; i < n; i++){
			if(a[i] != v[i] && a[i] != v[n-i-1]){
				ok = 1;
				break;
			}
		}
		if(ok == 0) cout << "Yes" << endl;
		else cout << "No" << endl;
	}
}
