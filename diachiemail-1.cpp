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
		strcpy(x[n++],p);
		p=strtok(NULL," ");
	}
	for(int i=0;i<n-1;i++) cout<<x[i][0];
	cout<<x[n-1];
	cout<<"@ptit.edu.vn";
}
