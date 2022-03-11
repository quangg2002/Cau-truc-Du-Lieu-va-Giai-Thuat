#include<bits/stdc++.h>
using namespace std;

void nhap(int a[][105], int n){
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cin>>a[i][j];
		}
	}
}

int main(){
	int n ,a[105][105],m, b[15][105], c[105][105];
	cin>>n;
	nhap(a,n);
	cin>>m;
	nhap(b,m);
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			int d1=i%m , d2=j%m;
			if(d1==0)  d1=m;
			if(d2==0)  d2=m;
			c[i][j]=b[d1][d2];
		}
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cout<<a[i][j]*c[i][j]<<" ";
		}
		cout<<endl;
	}
}
