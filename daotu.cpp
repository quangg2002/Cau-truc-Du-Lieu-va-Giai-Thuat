#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	cin.ignore();
	while(t--){
		char s[1005];
		cin.getline(s,1005);
		char x[100][100];
		int d=0;
		char*p = strtok(s," \n\t");
		while(p!=NULL){
			strcpy(x[d++],p);
			p=strtok(NULL, " \n\t");
		}
		for(int i=d-1;i>=0;i--) cout<<x[i]<<" ";
		cout<<endl;
	}
}
