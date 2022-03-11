#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,m;
		cin>>n>>m;
		int a[100][100];
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				cin>>a[i][j];
			}
		}
		int h1=0, hc=n-1, c1=0, cc=m-1;
		while(h1<hc&&c1<cc){
			int x=a[h1+1][c1];
			for(int i=c1;i<=cc;i++){
				int y=a[h1][i];
				a[h1][i]=x;
				x=y;
			}
			h1++;
			for(int i=h1;i<=hc;i++){
				int y=a[i][cc];
				a[i][cc]=x;
				x=y;
			}
			cc--;
			if(h1<=hc){
				for(int i=cc;i>=c1;i--){
					int y=a[hc][i];
					a[hc][i]=x;
					x=y;
				}
				hc--;
			}
			if(c1<=cc){
				for(int i=hc;i>=h1;i--){
					int y=a[i][c1];
					a[i][c1]=x;
					x=y;
				}
				c1++;
			}
		}
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				cout<<a[i][j]<<" ";
			}
		}
		cout<<endl;
	}
}
