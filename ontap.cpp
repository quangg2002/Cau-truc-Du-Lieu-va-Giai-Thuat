#include<bits/stdc++.h>
using namespace std;

int n, k, a[100];
vector < vector < int > > v;

void ql(int i){
	for(int j = a[i - 1] + 1; j <= n - k + i; j++){
		a[i] = j;
		if(i == k){
			vector < int > res;
			for(int j = 1; j <= k; j++)	res.push_back(a[j]);
			v.push_back(res);
			res.clear();
		}
		else ql(i + 1);
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		v.clear();
		cin >> n >> k;
		ql(1);
		reverse(v.begin(), v.end());
		for(auto x : v){
			for(int i = 0; i < x.size(); i++)	cout << x[i] << " ";
			cout << "\n";
		}
	}
}
