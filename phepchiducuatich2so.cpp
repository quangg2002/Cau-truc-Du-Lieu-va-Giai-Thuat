#include<bits/stdc++.h>
using namespace std;
long long cd(long long a,long long b,long long c){
	if(b==0) return 0;
	long long s=cd(a,b/2,c);
	if(b%2==0) return (2*(s%c))%c;
	if(b%2==1) return (a%c+2*(s%c))%c;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		long long a,b,c;
		cin>>a>>b>>c;
		cout<<cd(a,b,c)<<endl;
	}
}
