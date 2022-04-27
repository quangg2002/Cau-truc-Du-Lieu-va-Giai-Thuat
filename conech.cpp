#include<bits/stdc++.h>
using namespace std;

int main(){
	int t, n;
	cin>>t;
	while(t--){
		long long f[60];
		cin>>n;
		f[1]=1; f[2]=2; f[3]=4;
		for(int i=4;i<=50;i++) f[i]=f[i-1]+f[i-2]+f[i-3];
		cout<<f[n]<<endl;
	}
}
