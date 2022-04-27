#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,m=0;
		cin>>n;
		cin.ignore();
		char s[65],x[65][65];
		cin.getline(s,65);
		for(int i=0;i<strlen(s);i++) s[i]=tolower(s[i]);
		char *p=strtok(s," ");
		while(p!=NULL){
			p[0]=toupper(p[0]);
			strcpy(x[m++],p);
			p=strtok(NULL," ");
		}
		if(n==1){
			cout<<x[m-1]<<" ";
			for(int i=0;i<m-1;i++) cout<<x[i]<<" ";
		}
		if(n==2){
			for(int i=1;i<m;i++) cout<<x[i]<<" ";
			cout<<x[0]<<" ";
		}
		cout<<endl;
	}
}
