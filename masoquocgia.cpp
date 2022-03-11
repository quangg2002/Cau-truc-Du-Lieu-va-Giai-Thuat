#include<iostream>
#include<cstdio>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		int vitri=0;
		for(int i=0;i<s.size()-2;i++){
			if(s[i]=='0'&&s[i+1]=='8'&&s[i+2]=='4'){
				vitri=i;
			}
		}
		for(int i=0;i<vitri;i++) cout<<(char)s[i];
		for(int i=vitri+3;i<s.size();i++) cout<<(char)s[i];
		cout<<endl;
	}
}
