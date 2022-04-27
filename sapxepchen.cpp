#include<bits/stdc++.h>
using namespace std;

int main(){
	int n, d = 0;
	cin >> n;
	int a[n+5];
	vector <int> v[n];
	for(int i = 0; i < n ; i++) cin >> a[i];
	for(int i = 0; i < n ; i++){
		int x = a[i], vt = i-1;
		while( vt >= 0 && x < a[vt]){
			a[vt+1] = a[vt];
			vt--;
		}
		a[vt+1] = x;
		for(int k = 0; k < i+1 ; k++ ) v[d].push_back(a[k]);
		d++;
	}
	for(int i = d-1; i >= 0 ; i--){
		cout << "Buoc " << i << ": ";
		for(auto x : v[i]) cout << x << " ";
		cout << endl;
	}
}
