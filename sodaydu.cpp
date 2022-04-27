#include <bits/stdc++.h>
using namespace std;
bool check(string s){
	if(s[0]=='0') return 0;
	for(int i=0;i<s.size();i++){
		if(!(s[i]>='0'&&s[i]<='9')) return 0;
	}
	return 1;
}
main(){
	int t;cin>>t;
	while(t--){
		string s;
		cin>>s;
		int a[15]={0},kt=1;
		if(check(s)){
			for(int i=0;i<s.size();i++) a[s[i]-'0']=1;
			for(int i=0;i<=9;i++){
				if(a[i]==0){
					cout<<"NO\n";
					kt=0;
					break;
				}
			}
			if(kt) cout<<"YES\n";
		}
		else cout<<"INVALID\n";
	}
}
 
