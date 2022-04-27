#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	cin.ignore();
	while(t--){
		char s[105];
		int b[105];
		cin>>s;
		for(int i=0;i<strlen(s);i++) b[i]=1;
		for(int i=0;i<strlen(s);i++){
			if(b[i]==1){
				int dem=1;
				for(int j=i+1;j<strlen(s);j++){
					if(s[i]==s[j]){
						dem++;
						b[j]=0;
					}
				}
				cout<<s[i]<<dem;
			}
		}
		cout<<endl;
	}
}
