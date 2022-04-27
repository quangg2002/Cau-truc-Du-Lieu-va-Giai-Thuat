#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,dem=0;
		cin>>n;
		int a[n][n];
		map< int , int > mp;
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				cin>>a[i][j];
			}
		}
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				if(mp[a[i][j]]==i) mp[a[i][j]]++;
			}
		}
		for(auto x : mp) if(x.second==n) dem++;
		cout<<dem<<endl;
	}
}
