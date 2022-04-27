#include<bits/stdc++.h>
using namespace std;

int tnn(string s){
	for(int i=0;i<s.length();i++) if(s[i]=='6') s[i]='5';
	int sum=0;
	for(int i=0;i<s.length();i++)	sum=sum*10+(s[i]-'0');
	return sum;
}
int tln(string s){
	for(int i=0;i<s.length();i++) if(s[i]=='5') s[i]='6';
	int s2=0;
	for(int i=0;i<s.length();i++)	s2=s2*10+(s[i]-'0');
	return s2;
}
int main(){
	string a,b;
	cin>>a>>b;
	cout<<tnn(a)+tnn(b)<<" "<<tln(a)+tln(b);
}
