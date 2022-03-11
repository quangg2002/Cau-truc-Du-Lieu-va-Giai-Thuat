#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n, k;
		cin >> n >>k;
		int a[n+5], d = 0;
		for(int i = 0;i < n;i++) cin >> a[i];
		sort(a, a+n);
		for(int i = 0;i < n-3 ;i++){
			int x = i+1, y = n-1;
			while(x != y){
				if(a[i] + a[x] + a[y] == k){
					d++; 	x++;
				}
				else if(a[i] + a[x] + a[y] < k) x++;
				else y--;
			}
		}
		if(d > 0) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
}
