#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	cin.ignore();
	while(t--){
		char s1[205],s2[205];
		cin.getline(s1,205);
		cin.getline(s2,205);
		char x1[205][205];
		int n=0;
		char*p=strtok(s1," ");
		while(p!=NULL){
			int ok=1;
			for(int i=0;i<n;i++){
				if(strcmp(p,x1[i])==0){
					ok=0;
					break;
				}
			}
			if(ok==1){
				strcpy(x1[n],p);
				n++;
			}
			p=strtok(NULL," ");
		}
		char t[205];
		for(int i=1;i<n;i++){
			if(strcmp(x1[i-1],x1[i])>0){
				strcpy(t,x1[i-1]);
				strcpy(x1[i-1],x1[i]);
				strcpy(x1[i],t);
			}
		}
		char x2[205][205];
		int m=0;
		char*q=strtok(s2," ");
		while(q!=NULL){
			int ok=1;
			for(int i=0;i<m;i++){
				if(strcmp(q,x2[i])==0){
					ok=0;
					break;
				}
			}
			if(ok==1){
				strcpy(x2[m],q);
				m++;
			}
			q=strtok(NULL," ");
		}
		for(int i=0;i<n;i++){
			int ok=0;
			for(int j=0;j<m;j++){
				if(strcmp(x1[i],x2[j])==0){
					ok=1;
					break;
				}
			}
			if(ok==0) cout<<x1[i]<<" ";
		}
		cout<<endl;
	}
}
