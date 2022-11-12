#include<bits/stdc++.h>
using namespace std;

int main(){
	int n, k;
	cin >> n >> k;
	for(int i = 0; i < n; i++){
		string s;
		cin >> s;
		v.push_back(s.size());
	}
	for(int i = 0; i <= k; i++) b[v[i]] ++;
	d += b[v[0]] - 1;
	for(int i = 1; i < n - k; i++){
		b[v[i - 1]] --;
		b[v[i + k]] ++;
	}
	
}
