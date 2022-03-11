#include<bits/stdc++.h>
using namespace std;

int main(){
	char s[105];
	cin>>s;
	for(int i=0;i<strlen(s);i++) s[i]=tolower(s[i]);
	for(int i=0;i<strlen(s);i++){
		if(s[i]!='a'&&s[i]!='e'&&s[i]!='i'&&s[i]!='o'&&s[i]!='u'&&s[i]!='y'){
			cout<<"."<<(char) s[i];
		}
	}
}

