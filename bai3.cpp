#include<bits/stdc++.h>
using namespace std;


int main(){
	int n, b, k, a[100005]={0}, dem=0;
	cin>>n>>k>>b;
	for(int i=0;i<b;i++){
		int x;
		cin>>x;
		a[x]=1;
	}
	for(int i=1;i<=k;i++)	if(a[i]==1) dem++;
	int s=dem, mn=k;
	for(int i=k+1;i<=n;i++){
		s=s-a[i-k]+a[i];
		mn=min(s,mn);
	}
	cout<<mn<<endl;
}
