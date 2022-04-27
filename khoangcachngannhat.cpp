#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,m,y1,y2;
	cin>>n>>m;
	cin>>y1>>y2;
	int a[n],b[m];
	for(int i=0;i<n;i++) cin>>a[i];
	for(int i=0;i<m;i++) cin>>b[i];
	sort(a,a+n);
	sort(b,b+m);
	int i=0,j=0,min=abs(a[0]-b[0]),ans=0,dem=0;
	while(i<n&&j<m){
		if(min>abs(a[i]-b[j])){
			min=abs(a[i]-b[j]);
			ans=dem;
			dem=0;
		}
		if(min==abs(a[i]-b[j])) dem++;
		if(a[i]<b[j]) i++;
		else if(a[i]>b[j]) j++;
		else{
			i++;
			j++;
		}
	}
	ans=dem;
	cout<<(abs(y1-y2)+min)<<" "<<ans;
}
