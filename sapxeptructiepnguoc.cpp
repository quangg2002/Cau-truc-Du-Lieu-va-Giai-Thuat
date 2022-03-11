#include<bits/stdc++.h>
using namespace std;

int main(){
	int t, n;
	cin >> t;
	while(t--){
		cin >> n;
		int a[n+5], d = 0;
		vector < int > v[n];
		for(int i = 0; i < n; i++) cin >> a[i];
		for(int i = 0; i < n - 1; i++){
			for(int j = i + 1 ; j < n ; j++){
				if(a[i] > a[j]) swap(a[i], a[j]);
			}
			for(int i = 0; i < n; i++) v[d].push_back(a[i]);
			d++;
		}
		for(int i = d - 1; i >= 0 ; i--){
			cout << "Buoc " << i + 1 << ": ";
			for(auto x : v[i]) cout << x << " ";
			cout << endl;
		}
	}
}
