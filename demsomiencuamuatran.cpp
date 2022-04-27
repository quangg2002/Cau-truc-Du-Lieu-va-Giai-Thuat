#include<bits/stdc++.h>
using namespace std;

int n,m,a[100][100];
int dx[8]={-1,-1,-1,0,0,1,1,1};
int dy[8]={-1,0,1,-1,1,-1,0,1};
void xuly(int x,int y){
	a[x][y]=0;
	for(int i=0;i<8;i++){
		int xm=x+dx[i];
		int ym=y+dy[i];
		if(xm>=0&&xm<n&&ym>=0&&ym<m&&a[xm][ym]==1){
			xuly(xm,ym);
		}
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int dem=0;
		cin>>n>>m;
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				cin>>a[i][j];
			}
		}
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				if(a[i][j]==1){
					dem++;
					xuly(i,j);
				}
			}
		}
		cout<<dem<<endl;
	}
}
