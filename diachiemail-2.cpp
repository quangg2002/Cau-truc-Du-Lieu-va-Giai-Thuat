#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	map<string,int> mp;
	cin.ignore();
	while(t--){
		vector <string> v;
		string s,x,y;
		getline(cin,s);
		for(int i=0;i<s.length();i++) s[i]=tolower(s[i]);
		stringstream p(s);
		while(p>>x) v.push_back(x);
		y+=v[v.size()-1];
		for(int i=0;i<v.size()-1;i++) y+=v[i][0];
		if(mp[y]==0) cout << y << "@ptit.edu.vn" <<endl;
		else cout << y << mp[y]+1 << "@ptit.edu.vn" <<endl;
		mp[y]++;
	}
}
