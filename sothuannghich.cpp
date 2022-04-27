#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		string x,y;
		cin>>x;
		y=x;
		reverse(x.begin(), x.end());
		if(x==y) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
}
