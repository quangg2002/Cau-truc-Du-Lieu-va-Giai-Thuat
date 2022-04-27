#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		int sum=0;
		int n=s.length();
		for(int i=0;i<s.length();i++){
			if(s[i]=='1'){
				if((n-i-1)%4==0) sum+=1;
				if((n-i-1)%4==1) sum+=2;
				if((n-i-1)%4==2) sum+=4;
				if((n-i-1)%4==3) sum+=3;
			}
		}
		if(sum%5==0&&sum!=0) cout<<"Yes\n";
		else cout<<"No\n"; 
	}
}
