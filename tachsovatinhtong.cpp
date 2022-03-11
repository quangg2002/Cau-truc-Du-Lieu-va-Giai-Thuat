#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	cin.ignore();
	while(t--){
		char s[100005];
		cin>>s;
		long long sum=0;
		int n=strlen(s);
		sort(s,s+n);
		for(int i=0;i<n;i++){
			if(s[i]-'0'>=0&&s[i]-'0'<=9) sum+=s[i]-'0';
		}
		for(int i=0;i<n;i++){
			if(s[i]-'0'<0||s[i]-'0'>9) cout<<s[i];
		}
		cout<<sum<<endl;
	}
}
