#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	cin.ignore();
	while(t--){
		char s[1005];
		cin>>s;
		long long d=strlen(s);
		for(int i=0;i<strlen(s)-1;i++){
			for(int j=i+1;j<strlen(s);j++){
				if(s[i]==s[j]) d++;
			}
		}
		cout<<d<<endl;
	}
}
		
