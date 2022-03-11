#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	cin.ignore();
	while(t--){
		char s[105];
		cin>>s;
		int sum=0;
		for(int i=0;i<strlen(s);i++) sum+=s[i]-'0';
		while(sum>9){
			int x=sum, t=0;
			while(x!=0){
				t+=x%10;
				x/=10;
			}
			sum=t;
		}
		if(sum==9) cout<<"1"<<endl;
		else cout<<"0"<<endl;
	}
}
