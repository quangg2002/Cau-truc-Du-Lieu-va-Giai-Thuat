#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int a,x=0;
		string b;
		cin>>a;
		cin>>b;
		for(int i=0;i<b.length();i++){
			x=(x*10+b[i]-'0')%a;
		}
		cout<<__gcd(x,a)<<endl;
	}
}
