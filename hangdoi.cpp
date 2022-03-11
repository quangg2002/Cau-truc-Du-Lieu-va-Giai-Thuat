#include<bits/stdc++.h>
using namespace std;

int main(){
	int t, n;
	cin >> t;
	while(t--){
		cin >> n;
		vector < string > v;
		queue < string > q;
		q.push("1");
		v.push_back("1");
		while(v.size() < n){
			string x = q.front();
			q.pop();
			v.push_back(x + "0");
			v.push_back(x + "1");
			q.push(x + "0");
			q.push(x + "1");
		}
		for(auto x : v) cout << x << " ";
		cout << endl;
	}
}
