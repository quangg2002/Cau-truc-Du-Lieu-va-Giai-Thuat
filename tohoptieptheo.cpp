#include<bits/stdc++.h>
using namespace std;

int n, k, a[100], ok = 1;
void skt(){
	int i = k;
	while( i > 0 && a[i] == n - k + i) i--;
	if(i == 0) ok = 0;
	else{
		a[i]++;
		for(int j = i+1 ; j <= k; j++ ) a[j] = a[i] + j - i;
	}
}
int main(){
	int t, d;
	cin >> t;
	while(t--){
		cin >> n >> k;
		map<int, int> mp;
		for(int i = 1; i <= k ; i++){
			cin >> a[i];
			mp[a[i]]++;
		}
		skt();
		d = 0;
		for(int i = 1; i <= k ; i++)		if(mp[a[i]] == 0) d++;
		if(d == 0) cout << k;
		else cout << d;
		ok = 1;
		cout << endl;
	}
}
