#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		int a[26]={0};
		for(char x : s) a[x-'a']++;
		int max=*max_element(a,a+26);
		if(s.length()-max>=max-1) cout<<"1"<<endl;
		else cout<<"-1"<<endl;
	}
}
