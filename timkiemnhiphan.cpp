#include<bits/stdc++.h>
using namespace std;

int tknp(int r, int l, int a[], int x){
	if(r < l) return 0;
	int mid = (r + l)/2;
	if(a[mid] == x) return mid + 1;
	if(a[mid] > x) return tknp(mid - 1, l, a, x);
	return tknp(r, mid  + 1, a, x);
}
int main(){
	int t;
	cin >> t;
	while(t--){
		int n, x;
		cin >> n >> x;
		int a[n + 5];
		for(int i = 0; i < n; i++)	cin >> a[i];
		if(tknp(n - 1, 0, a, x) == 0) cout << "NO\n";
		else cout << tknp(n - 1, 0, a, x) << endl;
	}
}
