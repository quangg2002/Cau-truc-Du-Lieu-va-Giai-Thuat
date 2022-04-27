#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	cin.ignore();
	while(t--){
		string s;
		getline(cin,s);
		int ok=1, d1=0, vt=-1, d2=0, kt =0;
		for(int i=0; i<s.length(); i++)		if(s[i]=='@') d1++;
		if(d1 != 1)		ok=0;
		if(d1 == 1){
			for(int i=0; i<s.length(); i++){
				if(s[i]=='@')		vt=i;
				if(s[i]==' ') 		ok=0;
				if(s[i] != '.' &&((s[i] >= 'A' && s[i] <= 'Z') 
				   				|| (s[i] >= 'a' && s[i] <= 'z') 
								|| (s[i] >= '0' && s[i] <= '9'))) 
				kt=1;
				else ok=0; 
			}
			if(vt >= 64) ok=0;
			if(s.length() > 218) ok=0;
			for(int i=vt; i<s.length(); i++) if(s[i]=='.') d2++;
			if(d2 == 0) ok=0;
		}
		if(ok==0) cout<<"NO"<<endl;
		else cout<<"YES"<<endl;
	}
}
