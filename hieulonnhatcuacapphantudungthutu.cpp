#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n, hieu=-1, min=INT_MAX;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++) cin>>a[i];
		for(int i=0;i<n;i++){
			if(min>a[i]) min=a[i];
			if(a[i]>min) hieu= max(a[i]-min,hieu);
		}
		cout<<hieu<<endl;
	}
}
