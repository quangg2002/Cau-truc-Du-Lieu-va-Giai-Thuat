#include<bits/stdc++.h>
using namespace std;

int a[25], n , k , ok, s,dem;
void in(){
	int t=0;
	for(int i=1;i<=k;i++) t+=a[i];
	if(t==s) dem++;
}
void ql(int i){
	int j;
	for(int j=a[i-1]+1;j<=n+k-i;j++){
		a[i]=j;
		if(i==k) in();
		else ql(i+1);
	}	
}
int main(){
	while(1){
		cin>>n>>k>>s;
		if( !n && !s && !k) break;
		dem=0;
		ql(1);
		cout<<dem<<endl;
	}
}

