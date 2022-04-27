#include<bits/stdc++.h>
using namespace std;

int qhd(int a[], int n, int sum){
	int f[sum+5];
	f[0] = 1;
	for(int i = 0; i < n; i ++){
		for(int j = sum; j >= a[i]; j--){
			if(f[j] == 0 && f[j - a[i]] == 1) f[j] = 1;
		}
	}
	return f[sum];
}

int main(){
	int t, n;
	cin >> t;
	while(t--){
		cin >> n;
		int a[n+5];
		int s = 0;
		for(int i = 0; i < n; i++){
			cin >> a[i];
			s += a[i];
		}
		if(s % 2 != 0) cout << "NO";
		else{
			if(qhd(a,n,s/2)) cout << "YES";
			else cout << "NO";
		}
		cout << endl;
	}
}
