#include<bits/stdc++.h>
using namespace std;

int main(){
	int t, n;
	cin >> t;
	while(t--){
		cin >> n;
		int a[n+5];
		vector<vector<int>> v;
		for(int i = 0; i < n; i++)	cin >> a[i];
		vector <int> res(a,a+n);
		v.push_back(res);
		while(n > 1){
			for(int i = 0; i < n - 1; i++) a[i] = a[i] + a[i+1];
			vector <int> cmp(a,a+n-1);
			v.push_back(cmp);
			n--;
		}
		reverse(v.begin(), v.end());
		for(auto x : v){
			cout << "[";
			for(int i = 0; i < x.size(); i++){
				cout << x[i];
				cout << (i == x.size()-1 ? "]" : " ");
			}
			cout << " ";
		}
		cout << endl;
	}
}
