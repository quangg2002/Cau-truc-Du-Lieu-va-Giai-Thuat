#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k,a[1005];
		cin>>n>>k;
		long long sum=0;
		for(int i=0;i<n;i++){
			cin>>a[i];
			if(i<k) sum+=a[i];
		}
		long long max=sum,vt=0;
		for(int i=k;i<n;i++){
			sum=sum-a[i-k]+a[i];
			if(sum>max){
				max=sum;
				vt=i-k+1;
			}
		}
		for(int i=0;i<k;i++)	cout<<a[vt+i]<<" ";
		cout<<endl;
	}
}
