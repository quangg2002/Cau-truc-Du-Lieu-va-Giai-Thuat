#include<bits/stdc++.h>
using namespace std;

int main(){
	int t, n;
	cin >> t;
	while(t--){
		cin >> n;
		cin.ignore();
		string s;
		getline(cin, s);
		set <int > st;
		for(int i=0 ; i < s.length() ;i++){
			if(s[i] != ' ') st.insert(s[i]-'0');
		}
		for(auto x : st) cout << x << " ";
		cout << endl;
	}
}
