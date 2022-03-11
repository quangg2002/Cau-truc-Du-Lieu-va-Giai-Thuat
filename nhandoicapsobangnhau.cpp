#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		long long a[n],b[n],m=0;
		for(int i=0;i<n;i++) cin>>a[i];
		for(int i=0;i<n-1;i++){
			if(a[i]==a[i+1]){
				a[i]=a[i]*2;
				a[i+1]=0;
			}
		}
		for(int i=0;i<n;i++)	if(a[i]!=0) b[m++]=a[i];
		for(int i=0;i<n;i++)	if(a[i]==0) b[m++]=a[i];
		for(int i=0;i<m;i++)	cout<<b[i]<<" ";
		cout<<endl;
	}
}

