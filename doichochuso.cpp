#include <bits/stdc++.h> 
using namespace std; 
int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		int l=s.size(),ok=1,vt1,max=-1,vt2,kt=1;
		for(int i=l-2;i>=0;i--){
			if(s[i]>s[i+1]){
				vt1=i;
				ok=0;
				break;
			}
		}
		if(ok==1) cout<<"-1"<<endl;
		else{		
			for(int i=vt1+1;i<l;i++){
				if(s[vt1]>s[i]&&s[i]>max){
					max=s[i];
					vt2=i;
				}
			}
			swap(s[vt1],s[vt2]);
			cout<<s<<endl;
		}
	}
}
