#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,a[100][100],b[10005];
	cin>>n;
	for(int i=0;i<n*n;i++){
		cin>>b[i];
	}
	sort(b,b+(n*n));
	int hang=n-1,	cot=n-1,	d=0,	s=0;
	while(d<=n/2){
		for(int i=d;i<=cot;i++) a[d][i]=b[s++];
		for(int i=d+1;i<=hang;i++) a[i][cot]=b[s++];
		for(int i=cot-1;i>=d;i--) a[hang][i]=b[s++];
		for(int i=hang-1;i>d;i--) a[i][d]=b[s++];
		hang--;		cot--;		d++;
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
}
