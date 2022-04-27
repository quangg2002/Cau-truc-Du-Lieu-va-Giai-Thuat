#include<bits/stdc++.h>
using namespace std; 
int main(){ 
	char s[1005],s1[1005];
	cin.getline(s,1005);
	cin.getline(s1,1005);
	char*p = strtok(s," \n\t");
	while(p!=NULL){
		if(strcmp(p,s1)!=0) cout<<p<<" ";
		p=strtok(NULL, " \n\t");
	}
	cout<<endl;
}
