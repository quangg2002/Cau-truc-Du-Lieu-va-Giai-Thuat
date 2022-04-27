#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,x,ok=0;
		cin>>n>>x;
		int a[n];
		for(int i=0;i<n;i++)	cin>>a[i];
		for(int i=0;i<n;i++){
			if(a[i]==x){
				ok=1;
				cout<<i+1<<endl;
				break;
			}
		}
		if(ok==0) cout<<"-1"<<endl;
	}
}
