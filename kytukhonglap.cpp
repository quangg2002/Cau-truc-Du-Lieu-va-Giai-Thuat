#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	char c;
	cin>>t>>c;
	while(t--){
		char s[100005];
		int b[100005];
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
				if(dem==1) cout<<s[i];
			}
		}
		cout<<endl;
	}
}
		
