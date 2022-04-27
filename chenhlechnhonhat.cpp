#include<bits/stdc++.h>
using namespace std;

int main(){
	int t, n;
	cin >> t;
	while(t--){
		cin >> n;
		int a[n+5];
		for(int i = 0;i < n; i++) cin >> a[i];
		sort(a, a + n);
		int x = INT_MAX;
		for(int i = 0;i < n-1; i++)		if(a[i+1]- a[i] < x) x = a[i+1]- a[i];
		cout << x << endl;
	}
}
