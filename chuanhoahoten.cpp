#include<bits/stdc++.h>
using namespace std;
int main(){
	char s[105];
	cin.getline(s,105);
	char x[100][100];
	int n=0;
	for(int i=0;i<strlen(s);i++) s[i]=tolower(s[i]);
	char *p =strtok(s," ");
	while(p!=NULL){
		p[0]=toupper(p[0]);
		strcpy(x[n++],p);
		p=strtok(NULL," ");
	}
	for(int i=0;i<n-2;i++) cout<<x[i]<<" ";
	cout<<x[n-2];
	for(int i=0;i<strlen(x[n-1]);i++) x[n-1][i]=toupper(x[n-1][i]);
	cout<<","<<" "<<x[n-1];	
}
