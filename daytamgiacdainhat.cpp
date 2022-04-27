#include<bits/stdc++.h>
using namespace std;

int main(){
	int t, n, s;
	cin >> t;
	while(t--){
		cin >> n;
		s = 0;
		int a[n + 5], b[n + 5], c[n + 5];
		b[0] = 1, c[0] = 1;
		for(int i = 0; i < n ; i++) cin >> a[i];
		for(int i = 1; i < n ; i++){
			b[i]=1;
			if(a[i] > a[i-1]) b[i] += b[i-1];
		}
		reverse(a, a+n);
		for(int i = 1; i < n ; i++){
			c[i]=1;
			if(a[i] > a[i-1]) c[i] += c[i-1];
		}
		for(int i = 0; i < n ; i++)		s = max(s, b[i] + c[n-i-1]);
		cout << s - 1 << endl;
	}
}
