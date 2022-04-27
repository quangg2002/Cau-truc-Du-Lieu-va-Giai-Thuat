#include<bits/stdc++.h>
using namespace std;

int l, ok;
set < string > se;
int ktra(string s){
	if(s.size() < 2) return 0;
	stack < char > st;
	for(int i = 0; i < s.size(); i++){
		if(s[i] == '(') st.push(s[i]);
		else if(s[i] == ')'){
			if(st.empty()) return 0;
			else st.pop();
		}
	}
	if(st.empty()) return 1;
	return 0;
}

void ql(string s, int i){
	if(ktra(s)){
		if(s.size() != 0) ok = 1;
		if(s.size() > l){
			l = s.size();
			se.clear();
			se.insert(s);
		}
		if(s.size() == l) se.insert(s);
	}
	for(int j = i; j < s.size(); j++){
		if(s[j] == '(' || s[j] == ')'){
			string x = s;
			x.erase(j, 1);
			if(x.size() >= l)	ql(x, j);
		}
	}
}
int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		l = 1; ok = 0;
		ql(s,0);
		if(ok == 0) cout << "-1";
		else for(auto x : se) cout << x << " ";
		cout << "\n";
		se.clear();
	}
}
