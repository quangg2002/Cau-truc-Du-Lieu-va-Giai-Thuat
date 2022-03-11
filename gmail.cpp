#include<bits/stdc++.h>
using namespace std;

int main(){
	string s;
	set <string>st;
	while(cin >> s){
		for(int i=0;i<s.length();i++) s[i]=tolower(s[i]);
		st.insert(s);
	}
	for(auto x : st) cout << x << endl;
}
