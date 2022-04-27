#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n, k, a[100];
		cin>>n>>k;
		for(int i=0;i<n;i++) cin>>a[i];
		long long sum=a[0];
		sort(a+1, a+n, greater<int>());
		for(int i=1;i<n;i++){
			if(k>0) sum+=a[i];
			else sum-=a[i];
			k--;
		}
		cout<<sum<<endl;
	}
}
