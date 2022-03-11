#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		long long m,j=0;
		string s;
		cin>>s>>m;
		int n=s.size();
		for(int i=0;i<n;i++) j=(j*10+(s[i]-'0'))%m;
		cout<<j<<endl;
	}
}
