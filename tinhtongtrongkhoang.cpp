#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,m,p=1;
		cin>>n>>m;
		int a[n],b[2*m];
		for(int i=1;i<=n;i++)	cin>>a[i];
		for(int i=1;i<=2*m;i++)  cin>>b[i];
		while(p<=2*m){
			long long sum=0;
			for(int i=b[p];i<=b[p+1];i++){
				sum+=a[i];
			}
			cout<<sum<<endl;
			p+=2;
		}
	}
}
