#include<bits/stdc++.h>
using namespace std;

int main(){
	int t, ok;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		ok = 0;
		stack < char > st;
		for(char x : s){
			if(x == '(' || x == '[' || x == '{') st.push(x);
			else{
				if(st.empty()){
					ok = 1;
					break;
				}
				else{
					char y = st.top();
					if((y == '(' && x == ')') || (y == '[' && x == ']') || (y == '{' && x == '}')){
						st.pop();
					}
					else{
						ok = 1;
						break;
					}
				}
			}
		}
		if(ok == 0) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
}
