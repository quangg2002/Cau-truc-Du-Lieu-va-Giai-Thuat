#include<bits/stdc++.h>
using namespace std;

int main(){
	int n, m, a[100005], b[100005], i=0, j=0, dem=0;
	cin>>n>>m;
	for(int i=0;i<n;i++) cin>>a[i];
	for(int j=0;j<m;j++) cin>>b[j];
	sort(a, a+n);
	sort(b, b+m);
	while(i<n && j<m){
		if(a[i]>b[j]){
			dem++;	 i++; 	j++;
		}else{
			i++;
		}
	}
	cout<<dem;
}
