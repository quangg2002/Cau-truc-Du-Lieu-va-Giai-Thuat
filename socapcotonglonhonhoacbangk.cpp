#include<bits/stdc++.h>
using namespace std;
 
int main(){
	int t;
	cin>>t;
	while(t--){
		int n, x,m;
		cin>>n>>x;
		vector <long long> v;
		for(int i=0;i<n;i++){
			cin>>m;
			v.push_back(m);
		}
		sort(v.begin(),v.end());
		long long d=0;
		for(long long i=0;i<n;i++){
			long long k=lower_bound(v.begin(), v.end(),x-v[i]) - v.begin();
			k=max(k,i+1);
			d+=n-k;
		}
		cout<<d<<endl;
	}
}
