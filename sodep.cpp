#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	cin.ignore();
	while(t--){
		char s[505];
		cin>>s;
		int l=strlen(s),ok=1;
		for(int i=0;i<=l/2;i++){
			if(s[i]!=s[l-i-1]){
				ok=0;
				break;
			}
		}
		for(int i=0;i<l;i++) if(s[i]%2!=0){
			ok=0;
			break;
		}
		if(ok==1) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
}
