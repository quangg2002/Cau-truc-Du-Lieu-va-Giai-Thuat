#include<bits/stdc++.h>
using namespace std;

int main(){
	set <string > s1;
	set <string > s2;
	string x, y, x1, y1;
	getline(cin , x);
	getline(cin , y);
	stringstream p(x);
	while(p >> x1) {
		for(int i=0;i<x1.length();i++) x1[i]=tolower(x1[i]);
		s1.insert(x1);
	}
	stringstream q(y);
	while(q >> y1){
		for(int i=0;i<y1.length();i++) y1[i]=tolower(y1[i]);
		if(s1.count(y1)!=0) s2.insert(y1);
		s1.insert(y1);
	}
	for(auto z : s1) cout<< z <<" ";
	cout<<endl;
	for(auto t : s2) cout<< t <<" ";
	
}
