#include<bits/stdc++.h>
using namespace std;

int main(){
	int t, n, d;
	cin >> t;
	while(t--){
		cin >> n;
		queue < string > q;
		q.push("4");
		q.push("5");
		vector < string > v;
		while(v.size() < n){
			string x = q.front();
			string y = x;
			reverse(x.begin(), x.end());
			v.push_back(y + x);
			q.pop();
			q.push(y + "4");
			q.push(y + "5");
		}
		for(auto x : v) cout << x << " ";
		cout << endl;
	}
}
