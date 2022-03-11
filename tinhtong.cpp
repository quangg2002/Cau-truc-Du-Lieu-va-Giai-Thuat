#include<bits/stdc++.h>
using namespace std;

int tong(string s){
	for(int i=0; i<s.length();i++){
		if(s[i] > 'a' && s[i] < 'z') return 0; 
		if(s[i] > 'A' && s[i] < 'Z') return 0;
	}
	int ts=0;
	for(int i=0; i<s.length();i++){
		ts *= 10;
		ts += (int)(s[i]-'0');
	}
	return ts;
}

int main(){
	string s;
	ifstream ifs;
	ifs.open("DATA.in");
	long long sum=0;
	while( ifs >> s){
		if(s.length()>=10) continue;
		else sum+= tong(s);
	}
	ifs.close();
	cout<<sum;
}
