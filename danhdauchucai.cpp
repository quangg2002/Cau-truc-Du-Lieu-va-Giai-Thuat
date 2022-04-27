#include<bits/stdc++.h>
using namespace std;

int main(){
	string s;
	cin>>s;
	set <char> st;
	for(int i=0;i<s.length();i++) st.insert(s[i]);
	cout<<st.size();
}
