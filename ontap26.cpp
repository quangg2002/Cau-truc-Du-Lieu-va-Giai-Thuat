#include<bits/stdc++.h>
using namespace std;

vector < vector < string > > v(15);
int n;

void ql(string s, int d2, int d3, int d5, int d7, int kt){
	if(s.size() > 10) return;
	if(d2 != 0 && d3 != 0 && d5 != 0 && d7 != 0 && kt) v[s.size()].push_back(s);
	ql(s + "2", d2 + 1, d3, d5, d7, 0);
	ql(s + "3", d2 , d3 + 1, d5, d7, 1);
	ql(s + "5", d2 , d3, d5 + 1, d7, 1);
	ql(s + "7", d2 , d3, d5, d7 + 1, 1);
}

int main(){
	cin >> n;
	ql("",0,0,0,0,0);
	for(int i = 4; i <= n; i++){
		sort(v[i].begin(), v[i].end());
		for(auto x : v[i]){
			cout << x << endl;
		}
	}
}
