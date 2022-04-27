#include<bits/stdc++.h>
using namespace std;

int main(){
	int t, n, s;
	cin >> t;
	while(t--){
		cin >> n >> s;
		int a[n+5], dd[40005] = {0};
		for(int i = 0; i < n; i++) cin >> a[i];
		dd[0] = 1;
		for(int i = 0; i < n; i++){
			for(int j = s; j >= a[i]; j--){
				if(dd[j] == 0 && dd[j - a[i]] == 1) dd[j] = 1;
			}
		}
		if(dd[s] == 1) cout << "YES\n";
		else cout << "NO\n";
		memset(dd, 0, sizeof(dd));
	}
}
