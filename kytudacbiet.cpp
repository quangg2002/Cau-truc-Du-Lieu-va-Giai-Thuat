#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		long long n;
		cin>>s>>n;
		vector <char> v;
		for(int i=0;i<s.length();i++) v.push_back(s[i]);
		int l=v.size();
		while(v.size()<=n){
			v.push_back(v[l-1]);
			for(int i=0;i<l-1;i++){
				v.push_back(v[i]);
			}
			l=v.size();
		}
		cout<<v[n-1]<<endl;
	}
}
