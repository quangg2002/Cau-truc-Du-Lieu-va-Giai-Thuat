#include<bits/stdc++.h>
using namespace std;

int main(){
	int t, n;
	cin >> t;
	while(t--){
		cin >> n;
		int a[n + 5];
		for(int i = 0; i < n; i++) cin >> a[i];
		cout << count(a, a + n, 0) << endl;
	}
}
