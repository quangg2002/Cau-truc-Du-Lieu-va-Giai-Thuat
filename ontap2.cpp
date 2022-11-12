#include<bits/stdc++.h>
using namespace std;

int n, a[100];
vector < vector < int > > v;

void ql(int sum, int sl, int vt){
	if(sum == n){
		vector < int > res(a, a + sl);
		v.push_back(res);
	}
	for(int i = vt; i >=  1; i--){
		if(sum + i <= n){
			a[sl] = i;
			ql(sum + i, sl + 1, i);
		}
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n;
		v.clear();
		ql(0,0,n);
		cout << v.size() << endl;
		for(auto x : v){
			cout << "(";
			for(int i = 0; i < x.size(); i++){
				cout << x[i];
				cout << (i == x.size() - 1 ? ")" : " ");
			}
		}
		cout << endl;
	}
}
