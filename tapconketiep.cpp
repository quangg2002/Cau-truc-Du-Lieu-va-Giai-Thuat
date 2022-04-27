#include<bits/stdc++.h>
using namespace std;

int a[1005], n, k, ok;
void sinh(){
	int i=k;
	while(i>=0 && a[i]==n+i-k) i--;
	if(i==0) ok=1;
	else{
		a[i]+=1;
		for(int j=i+1;j<=k;j++) a[j]=a[i]+j-i;
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		ok=0;
		cin>>n>>k;
		for(int i=1;i<=k;i++) cin>>a[i];
		sinh();
		if(ok==1) for(int i=1;i<=k;i++) cout<<i<<" ";
		else{
			for(int i=1;i<=k;i++) cout<<a[i]<<" ";
		}
		cout<<endl;
	}
}
