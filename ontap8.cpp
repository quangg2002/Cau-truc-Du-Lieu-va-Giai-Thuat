#include<bits/stdc++.h>
using namespace std;

int n, a[100], b[100];
vector < vector < int > > v;

int kt(int n){
	if(n < 2) return 0;
	for(int i = 2; i <= sqrt(n); i++) if(n % i == 0) return 0;
	return 1;
}

void ql(int i){
	for(int j = 0; j <= 1; j++){
		b[i] = j;
		if(i == n){
			int sum = 0;
			for(int j = 1; j <= n; j++) if(b[j] == 1) sum += a[j];
			if(kt(sum)){
				vector < int > res;
				for(int j = 1; j <= n; j++) if(b[j] == 1) res.push_back(a[j]);
				v.push_back(res);
			} 
		}
		else ql(i + 1);
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		v.clear();
		cin >> n;
		for(int i = 1; i <= n; i++) cin >> a[i];
		sort (a + 1, a + n + 1, greater < int > ());
		ql(1);
		for(auto x : v){
			for(int i = 0; i < x.size(); i++){
				cout << x[i] << " ";
			}
			cout << endl;
		}
	}
}
