#include<bits/stdc++.h>
using namespace std;
int a[10000000];
int main(){
	int t;
	cin>>t;
	while(t--){
		long long n,k,tn=0,d=0;
		cin>>n>>k;
		for(int i=0;i<n;i++){
			cin>>a[i];
			if(a[i]<=k) tn++;
		}
		for(int i=0;i<tn;i++) if(a[i]<=k) d++;
		long long sum=d;
		for(int i=tn;i<n;i++){
			if(a[i-tn]<=k) d--;
			if(a[i]<=k) d++;
			sum=max(sum,d);
		}
		cout<<tn-sum<<endl;
	}
}
