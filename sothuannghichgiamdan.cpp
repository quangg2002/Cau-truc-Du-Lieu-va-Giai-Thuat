#include<bits/stdc++.h>
using namespace std;
#define all(a) a.begin(),a.end()
bool check(string s){
	if(s.size() <2) return false;
	string t = s;
	reverse(all(s));
	return t == s;
}
 
bool cmp(pair<string, int> a, pair<string, int> b){
	return (a.first.size() != b.first.size() ? a.first.size() > b.first.size() : a > b);
}
 
int main(){
	map<string, int> mp;
	string s;
	while(cin >> s){
		if(check(s)) mp[s]++;
	}
	vector<pair<string, int>> v;
	for(auto it : mp){
		v.push_back(it);
	}
	sort(all(v), cmp);
	for(auto it : v){
		cout << it.first << " " << it.second << endl;
	}
}
