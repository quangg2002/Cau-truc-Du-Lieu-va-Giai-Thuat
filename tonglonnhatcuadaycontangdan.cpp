#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,mx=0;
		cin>>n;
		int a[n],b[n];
		for(int i=0;i<n;i++) {
			cin>>a[i];
			b[i]=a[i];	
		}
		for(int i=1;i<n;i++){
			for(int j=0;j<i;j++){
				if(a[j]<a[i]&&b[i]<b[j]+a[i])		b[i]=b[j]+a[i];
			}
		}
		for(int i=0;i<n;i++) mx=max(mx,b[i]);
		cout<<mx<<endl;
	}
}
