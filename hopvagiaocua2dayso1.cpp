#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,m,a[100005],b[100005];
		cin>> n >> m;
		set	<int> s1;
		set	<int> s2;
		for(int i=0;i<n;i++){
			cin>>a[i];
			s1.insert(a[i]);
			s2.insert(a[i]);
		}
		for(int i=0;i<m;i++){
			cin>>b[i];
			s1.insert(b[i]);
		}
		for(auto x: s1) cout<<x<<" ";
		cout<<endl;
		for(int i=0;i<m;i++)	if(s2.count(b[i])!=0) cout<<b[i]<<" ";
		cout<<endl;
	}
}
