#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,m,x,ok=1;
	cin>>n>>m;
	int b[505]={0},max1=0,max2=0,vt=0;
	for(int i=0;i<n;i++){
		cin>>x;
		b[x]++;
	}
	for(int i=1;i<=m;i++)	if(b[i]>max1) max1=b[i];
	for(int i=1;i<=m;i++){
		if(max1>b[i]&&max2<b[i]) {
			max2=max(max2,b[i]);
			vt=i;
		}
	}
	if(vt!=0) cout<<vt;
	else cout<<"NONE";
}
