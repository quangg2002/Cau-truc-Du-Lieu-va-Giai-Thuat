#include<bits/stdc++.h>
using namespace std;

string s;
int a[1005], ok;
void sinh(){
	int i=s.length();
	while(i>=1&& a[i]==1){
		a[i]=0;
		i--;
	}
	if(i==0) ok=1;
	else a[i]=1;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		ok=0;
		cin>>s;
		for(int i=0;i<s.length();i++) a[i+1]=s[i]-'0';
		sinh();
		for(int i=1;i<=s.length();i++) cout<<a[i];
		cout<<endl;
	}
}
