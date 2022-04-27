#include<iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		int ok=1;
		for(int i=0;i<s.size()-1;i++){
			if(s[i]>s[i+1]){
				if(s[i]-s[i+1]!=1){
					ok=0;
					break;
				}
			}else{
				if(s[i+1]-s[i]!=1){
					ok=0;
					break;
				}
			}
		}
		if(ok==1) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
}
