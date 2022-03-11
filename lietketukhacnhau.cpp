#include<bits/stdc++.h>
using namespace std;

int main(){
	set <string> st;
	string s;
	ifstream ifs;
	ifs.open("VANBAN.in");
	while(ifs >> s){
		for(int i=0; i < s.length(); i++) s[i]=tolower(s[i]);
		st.insert(s);
	}
	ifs.close();
	for( auto x : st) cout << x << endl;
}
