#include<bits/stdc++.h>
using namespace std;

int n, b[100], x[100], s, a[100];
vector < vector < int > > v;
void ql(int sum, int t, int d){
	if(sum == s){
		vector < int > res (x, x + t);
		v.push_back(res);
	}
	for(int i = d; i <= n; i++){
		if(sum + a[i] <= s){
			x[t] = a[i];
			ql(sum + a[i], t + 1, i);
		}
	}
}
int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n >> s;
		for(int i = 1; i <= n; i++) cin >> a[i];
		ql(0,0,1);
		if(v.size() != 0){
			cout << v.size() << " ";
			for(auto x : v){
				cout << "{";
				for(int i = 0; i < x.size(); i++){
					cout << x[i];
					if(i != x.size() - 1) cout << " ";
					else cout << "} ";
				}
			}
		}else cout << "-1";
		cout << endl;
		v.clear();
	}
}
