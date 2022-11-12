#include<bits/stdc++.h>
using namespace std;

int main(){
	int t, d;
	cin >> t;
	cin.ignore();
	while(t--){
		string s;
		getline(cin, s);
		d = 0;
		stack < int > st;
		for(int i = 0; i < s.size(); i++){
			if(s[i] == '('){
				d++;
				st.push(d);
				cout << d << endl;
			}
			if(s[i] == ')'){
				if(!st.empty()){
					cout << st.top() << endl;
					st.pop();
				}
			}
		}
		cout << "\n";
	}
}
