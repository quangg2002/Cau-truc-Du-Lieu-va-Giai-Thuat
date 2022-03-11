#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007

int main(){
	int t, n, k;
	cin>>t;
	while(t--){
		cin>>n>>k;
		int f[100005]={0};
		f[0]=1; f[1]=1;
		for(int i=2;i<=n;i++){
			for(int j=1 ; j<= min(i,k); j++){
				f[i]=f[i]+f[i-j];
				f[i]%=mod;
			}
		}
		cout<<f[n]<<endl;
	}
}
