#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		cin.ignore();
		char s[23*n];
		int a[11],d=0,b[23*n];
		cin.getline(s,23*n);
		for(int i=0;i<strlen(s);i++) b[i]=1;
		for(int i=0;i<strlen(s);i++){
			if(b[i]==1){
				for(int j=i+1;j<strlen(s);j++){
					if(s[i]==s[j]){
						b[j]=0;
					}
				}
				if(s[i]!=' ') a[d++]=s[i]-'0';
			}
		}
		sort(a,a+d);
		for(int i=0;i<d;i++) cout<<a[i]<<" ";
		cout<<endl;
	}
}
