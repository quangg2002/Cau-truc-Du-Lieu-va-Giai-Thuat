#include<bits/stdc++.h>
using namespace std;
long long a[1000005];
int main(){
	int t;
	cin>>t;
	while(t--){
		long long n;
		cin>>n;
		for(int i=0;i<n;i++)	cin>>a[i];
		for(int i=0;i<n;i++) if(a[i]!=0) cout<<a[i]<<" ";
		for(int i=0;i<n;i++) if(a[i]==0) cout<<a[i]<<" ";
		cout<<endl;
	}
}
