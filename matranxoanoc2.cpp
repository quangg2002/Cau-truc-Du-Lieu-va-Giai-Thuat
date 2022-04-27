#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,m,a[100][100],b[10005];
		cin>>n>>m;
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				cin>>a[i][j];
			}
		}
		int hang=n-1,	cot=m-1,	d=0,	s=0;
		while(d<=n/2){
			for(int i=d;i<=cot;i++) b[s++]=a[d][i];
			for(int i=d+1;i<=hang;i++) b[s++]=a[i][cot];
			for(int i=cot-1;i>=d;i--) b[s++]=a[hang][i];
			for(int i=hang-1;i>d;i--) b[s++]=a[i][d];
			hang--;		cot--;		d++;
		}
		for(int i=m*n-1;i>=0;i--) cout<<b[i]<<" ";
		cout<<endl;
	}
}
