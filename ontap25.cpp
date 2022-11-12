#include<bits/stdc++.h>
using namespace std;

vector < int > v(1005, 0);
set < string > se;
int d = 0, a[1005];
string s;

int kt(int c){
	for(int i = 1; i <= d; i++){
		if(a[i] == 1 && c == i) return 0;
	}
	return 1;
}

void ql(int i){
	for(int j = 0; j <= 1; j++){
		a[i] = j;
		if(i == d){
			string x = "";
			for(int j = 0; j < s.size(); j++){
				if(kt(v[j]))  x += s[j];
			}
			se.insert(x);
		}
		else ql(i + 1);
	}
}

int main(){
	cin >> s;
	stack < int > st;
	for(int i = 0; i < s.size(); i++){
		if(s[i] == '('){
			d++;
			st.push(d);
			v[i] =d;
		}
		if(s[i] == ')'){
			v[i] = st.top();
			st.pop();
		}
	}
	ql(1);
	se.erase(s);
	for(auto x : se) cout << x << endl;
}
