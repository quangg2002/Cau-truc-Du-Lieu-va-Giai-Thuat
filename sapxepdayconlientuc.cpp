#include<bits/stdc++.h>
using namespace std;

int main(){
	int t, n, x;
	cin >> t;
	while(t--){
		cin >> n;
		int a[n+5], b[n+5];
		for(int i=0; i < n ; i++){
			cin >> a[i];
			b[i] = a[i];
		}
		sort(a, a+n);
		for(int i=0; i < n ; i++){
			if(a[i] != b[i]){
				cout << i + 1 << " ";
				break;
			}
		}
		for(int i=0; i < n ; i++)	if(a[i] != b[i]) x = i + 1;
		cout << x << endl;
	}
}
