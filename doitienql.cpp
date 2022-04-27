#include<bits/stdc++.h>
using namespace std;

int a[35], dd[100]={0}, s, n, ok = 0, d = INT_MAX;
vector < vector < int > > v;

void ql(int sum, int m,int t){
	if(sum == s){
		if(d > m) d = m;
		ok = 1;
		return;
	}
	if(ok) return;
	for(int i = t; i <= n; i++){
		if(sum + a[i] <= s){	
			ql(sum + a[i], m + 1, i+1);
		}
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n >> s;
		for(int i = 1; i <= n; i++) cin >> a[i];
		sort(a + 1, a + n + 1,greater<int>());
		ql(0 , 0, 1);
		if(ok == 1) cout << d << endl;
		else cout << "-1" << endl;
		d = INT_MAX;
		ok = 0;
	}
}
