#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		long long x,n;
		cin>>n;
		long long b[n];
		for(int i=0;i<n;i++) b[i]=0;
		for(int i=0;i<n;i++){
			cin>>x;
			if(x>=0&&x<n) b[x]++;
		}
		for(int i=0;i<n;i++){
			if(b[i]!=0) cout<<i<<" ";
			if(b[i]==0) cout<<"-1"<<" ";
		}
		cout<<endl;
	}
}
