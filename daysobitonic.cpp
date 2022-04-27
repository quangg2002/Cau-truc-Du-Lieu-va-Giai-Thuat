#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n], b[n],c[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
			b[i]=1;
			c[i]=1;	
		}
		for(int i=1;i<n;i++){
			for(int j=0;j<i;j++){
				if(a[j] < a[i]&& b[i]<b[j]+1) b[i]=b[j]+1;
			}
		}
		for(int i=n-2;i>=0;i--){
			for(int j=n-1;j>i;j--){
				if(a[j] < a[i]&& c[i]<c[j]+1) c[i]=c[j]+1;
			}
		}
		int mx=b[0]+c[0]-1;
		for(int i=1;i<n;i++) mx=max(mx,b[i]+c[i]-1);
		cout<<mx<<endl;
	}
}
