#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,m,a[100][100];
		cin>>n>>m;
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				cin>>a[i][j];
			}
		}
		int hang=n-1, cot=m-1, d=0, dem=n*m;
		while(d<=n/2){
			for(int i=d;i<=cot;i++){
				cout<<a[d][i]<<" ";
				dem--;
			}
			if(dem==0) break;
			for(int i=d+1;i<=hang;i++){
				cout<<a[i][cot]<<" ";
				dem--;
			}
			if(dem==0) break;
			for(int i=cot-1;i>=d;i--){
				cout<<a[hang][i]<<" ";
				dem--;
			}
			if(dem==0) break;
			for(int i=hang-1;i>d;i--){
				cout<<a[i][d]<<" ";
				dem--;
			}
			if(dem==0) break;
			cot--; hang--; d++;
		}
		cout<<endl;
	}
}
