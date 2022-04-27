#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[1001];
		for(int i=1;i<=n;i++) cin>>a[i];
		if(prev_permutation(a+1,a+n+1)){
			for(int i=1;i<=n;i++) cout<<a[i]<<" ";
		}else{
			for(int i=1;i<n;i++) cout<<n-i<<" ";
		}
		cout<<endl;
	}
}
