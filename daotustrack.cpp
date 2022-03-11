#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	cin.ignore();
	while(t--){
		stack < string > st;
		string s, x;
		getline(cin, s);
		stringstream p(s);
		while(p >> x)		st.push(x);
		while(!st.empty()){
			cout << st.top() << " ";
			st.pop();
		}
		cout << endl;
	}
}
