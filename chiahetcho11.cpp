#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		char s[1005];
		cin>>s;
		long long sc=0,sl=0;
		for(int i=0;i<strlen(s);i++){
			if(i%2==0) sc+=s[i]-'0';
			else sl+=s[i]-'0';
		}
		long long hieu=sc-sl;
		if(hieu%11==0) cout<<"1"<<endl;
		else cout<<"0"<<endl;
	}
}
