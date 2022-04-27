#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	map < int, int> mp;
	int a[n+5];
	for(int i = 0; i < n; i++){
		cin >> a[i];
		mp[a[i]]++;
		if(mp[a[i]] == 1) cout << a[i] << " ";
	}
}
