#include<bits/stdc++.h>
using namespace std;

int n, k, s, dem = 0, a[100], x[100];
void ql(int sum, int m, int d){
	if(m == k && sum == s){
		dem++;
		return;
	}
	for(int i = d; i <= n; i++){
		if(sum + a[i] <= s){
			ql(sum + a[i], m + 1, i + 1);
		}
	}
}

int main(){
	while(1){
		cin >> n >> k >> s;
		for(int i = 1; i <= n; i++) a[i] = i;
		dem = 0;
		if(n == 0 && k == 0 && s == 0) break;
		ql(0,0,1);
		cout << dem << endl;
	}
}
