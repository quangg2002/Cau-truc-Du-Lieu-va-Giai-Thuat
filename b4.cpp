#include<bits/stdc++.h>
using namespace std;
int main(){
	char s[200];
	int n=0;
	string ds[20000];
	while(cin>>s){
		ds[n]=s;
		for(int i=0;i<ds[n].size();i++) ds[n][i]=tolower(ds[n][i]);
		n++;
	}
	ds[0][0]=toupper(ds[0][0]);
	for(int i=0;i<n;i++){
		int l=ds[i].size();
		if(ds[i][l-1]=='.'||ds[i][l-1]=='?'||ds[i][l-1]=='!'){
			if(ds[i][l]=='\n') ds[i+1].insert(0,".");
			ds[i+1][0]=toupper(ds[i+1][0]);
			ds[i+1].insert(0,"\n");
		}
		else ds[i].push_back(' ');
	}
	for(int i=0;i<n;i++) cout<<ds[i];
}
