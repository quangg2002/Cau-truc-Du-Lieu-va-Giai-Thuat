#include<bits/stdc++.h>
#include <cstdlib>
using namespace std;

int main(){
	map <int, int> mp;
	string s ;
	int t;
	ifstream ifs;
	ifs.open("DATA.txt");
	while( ifs >> s){
		stringstream p(s);
		while( p >> t){
			mp[t]++;
		}
	}
	ifs.close();
	for(auto x : mp){
		cout << x.first << " " << x.second <<endl;
	}
}
