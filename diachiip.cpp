#include<bits/stdc++.h>
using namespace std;

int ktra(string s){
	if(s.size()>3)		return 0;
	if(s.size()==3 && s > "255")	return 0;
	return 1;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		string s,y;
		cin>>s;
		int kt=1, dem=0;
		for(int i=0; i<s.length();i++){
			if(s[i]=='.'){
				s[i]=' ';
				dem++;
				continue;
			}
			if(s[i]<'0' || s[i]>'9'){
				kt=0;
				break;
			}
		}
		if(dem!=3) kt=0;
		dem=0;
		stringstream p(s);
		while(p>>y){
			if(ktra(y)) dem++;
			else kt=0;
		}
		if(dem!=4) kt=0;
		if(kt==1) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
}
