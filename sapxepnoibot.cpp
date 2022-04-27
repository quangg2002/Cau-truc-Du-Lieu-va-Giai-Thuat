#include<bits/stdc++.h>
using namespace std;

int main(){
	int t, n;
	cin >> t;
	while(t--){
		cin >> n;
		int a[n+5], d = 0;
		vector <int> v[n];
		for(int i = 0;i < n; i++) cin >> a[i];
		for(int i = 0;i < n-1; i++){
			int ok = 1;
			for(int j = 0; j < n - i -1 ; j++){
				if(a[j] > a[j+1]){
					swap(a[j], a[j+1]);
					ok = 0;
				}
			}
			if(ok == 1) break;
			for(int k = 0; k < n; k++)	v[d].push_back(a[k]);
			d++;
		}
		for(int i = d-1; i >= 0 ; i--){
			cout << "Buoc " << i+1 << ": ";
			for(auto x : v[i]) cout << x << " ";
			cout << endl;
		}
	}
}
