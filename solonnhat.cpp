#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		long long x, a=0;
		stringstream p(s);
		while(p >> x){
			if(x > a) x=a;
		}
		cout << x;
	}
}
