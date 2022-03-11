#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
int main(){
	int t;
	cin>>t;
	while(t--){
		long long fb[1001];
		int n;
		cin>>n;
		fb[0]=0; fb[1]=1;
		for(int i=2;i<=n;i++){
			fb[i]=(fb[i-1]%mod)+(fb[i-2]%mod);
		}
		cout<<fb[n]%mod<<endl;
	}
}
