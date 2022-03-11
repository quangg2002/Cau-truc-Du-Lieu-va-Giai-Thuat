#include<iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		int l=s.size(),ok=0;
		if(s[l-2]=='8'&&s[l-1]=='6') ok=1;
		if(ok==1) cout<<1<<endl;
		else cout<<0<<endl;
	}
}
