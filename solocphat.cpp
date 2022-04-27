#include<bits/stdc++.h>
using namespace std;

int n, a[100];
vector < vector < int > > v;
void ql(int i){
	for(int j = 0; j <= 1; j++){
		a[i] = j;
		if(i == n){
			vector < int > res;
			for(int k = 1; k <= n; k++) res.push_back(a[k]);
			v.push_back(res);
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
		ql(1);
		cout << v.size() << "\n";
		for(auto x : v){
			for(int i = 0; i < x.size(); i++) cout << (x[i] == 0 ? 6 : 8);
			cout << " ";
		}
		cout << "\n";
	}
}
