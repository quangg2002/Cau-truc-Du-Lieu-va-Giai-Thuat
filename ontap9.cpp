#include<bits/stdc++.h>
using namespace std;

vector < string > v;

void ql(){
	queue < pair < string, int > > q;
	q.push({"", 0});
	while(1){
		string s = q.front().first;
		int cnt = q.front().second;
		q.pop();
		if(s[0] != '0' && cnt > s.size() / 2) v.push_back(s);
		if(v.size() > 1000) return;
		q.push({s + "0", cnt});
		q.push({s + "1", cnt});
		q.push({s + "2", cnt + 1});
	}
}

int main(){
	ql();
	int t, n;
	cin >> t;
	while(t--){
		cin >> n;
		for(int i = 0; i < n; i++) cout << v[i] << " ";
	}
} 
