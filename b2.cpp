#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		long long t, max=0;
		for(int i=0;i<s.length();i++){
			if(s[i]<'0' || s[i]>'9') s[i]=' ';
		}
		stringstream p(s);
		while(p >> t){
			if(t > max) max=t;
		}
		cout << max <<endl;
	}
}
