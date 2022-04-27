#include<bits/stdc++.h>
using namespace std;

int n, s, a[100], x[100], dd[100]={0}, ok;
void ql(int sum, int t, int j){
	if(sum == s){
		cout << "[";
		for(int i = 1; i < t; i++){
			cout << x[i];
			if( i != t - 1) cout << " ";
		} 
		cout << "] ";
		ok = 1;
		return;
	}
	for(int i = j; i <= n; i++){
		if(sum + a[i] <= s){
			x[t] = a[i];
			ql(sum + a[i], t + 1, i + 1);
		} 
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n >> s;
		ok = 0;
		for(int i = 1; i <= n ; i++) cin >> a[i];
		sort(a + 1, a + n +1);
		memset(dd, 0,sizeof(dd));
		ql(0,1,1);
		if(ok == 0) cout << "-1\n";
		else cout << "\n";
	}
}
