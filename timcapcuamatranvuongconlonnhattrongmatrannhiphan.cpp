#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,m;
		cin>>n>>m;
		int a[n][m], x[n][m];
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){ 
				cin>>a[i][j];
			}
		}
		for(int i=0;i<m;i++)	x[0][i]=a[0][i];
		for(int i=0;i<n;i++)	x[i][0]=a[i][0];
		for(int i=1;i<n;i++){
			for(int j=1;j<m;j++){ 
				if(a[i][j]==1){
					x[i][j]=min(x[i-1][j],min(x[i-1][j-1],x[i][j-1]))+1;
				}
				else x[i][j]=0;
			}
		}
		int y=0;
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){ 
				y=max(y,x[i][j]);
			}
		}
		cout<<y<<endl;
	}
}
