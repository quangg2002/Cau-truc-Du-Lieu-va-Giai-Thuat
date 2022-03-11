#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n, a[100], dem=1, m=1;
		cin>>n;
		for(int i=0;i<n;i++) cin>>a[i];
		for(int i=1;i<n;i++){
			if(a[i]==a[i-1]) dem++;
			else dem=1;
			m=max(dem,m);
		}
		cout<<n-m<<endl;
	}
}
