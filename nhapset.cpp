#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	cin.ignore();
	while(t--){
		set<string> s;
		string s1,s2,x,y;
		getline(cin,s1);
		stringstream p1(s1);
		while(p1>>x) s.insert(x);
		getline(cin,s2);
		stringstream p2(s2);
		while(p2>>y) if(s.count(y)!=0) s.erase(y);
		for(auto a : s) cout<<a<<" ";
		cout<<endl;
	}
}
