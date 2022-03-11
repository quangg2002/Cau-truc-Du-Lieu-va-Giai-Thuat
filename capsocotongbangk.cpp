#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n, k, a[100005];
		cin>>n >>k;
		map<int, int> mp;
		for(int i=0;i<n;i++){
			cin>>a[i];
			mp[a[i]]++;
		}
		long long d=0;
		for(int i=0;i<n;i++){
			d+=mp[k-a[i]];
			if(a[i]*2==k) d--;
		}
		cout <<d/2 <<endl;
	}
}
