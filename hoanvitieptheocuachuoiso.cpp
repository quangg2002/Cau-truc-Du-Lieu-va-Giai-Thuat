#include<bits/stdc++.h>
using namespace std;

int main(){
	int t, stt;
	cin >> t;
	while(t--){
		cin >> stt;
		string s;
		cin >> s;
		cout << stt << " ";
		if(next_permutation(s.begin(), s.end())) cout << s;
		else cout << "BIGGEST";
		cout << endl;
	}
}
