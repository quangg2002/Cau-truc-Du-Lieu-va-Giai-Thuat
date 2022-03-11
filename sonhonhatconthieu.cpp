#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,x;
		cin>>n;
		int a[n];
		for(int i=1;i<=n;i++)	a[i]=0;
		for(int i=0;i<n-1;i++){
			cin>>x;
			a[x]++;
		}
		for(int i=1;i<=n;i++){
			if(a[i]==0){
				cout<<i<<endl;
				break;
			}
		}
	}
}
