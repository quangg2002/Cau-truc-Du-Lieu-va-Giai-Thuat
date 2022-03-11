#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		int k;
		cin>>s>>k;
		set < char > st;
		for(int i=0;i<s.length();i++) st.insert(s[i]);
		if( k>= 26-st.size()) cout<<"1"<<endl;
		else cout<<"0"<<endl; 
	}
}
