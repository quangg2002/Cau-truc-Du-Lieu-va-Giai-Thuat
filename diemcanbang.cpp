#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,a[100005],sum=0,ok=0;
		cin>>n;
		for(int i=0;i<n;i++){
			cin>>a[i];
			sum=sum+a[i];
		}
		int t1=sum-a[n-1];
		int t=0;
		for(int i=n-2;i>=0;i--){
			t1-=a[i];
			t+=a[i+1];
			if(t1==t){
				cout<<i+1<<endl;
				ok=1;
				break;
			}
		}
		if(ok==0) cout<<"-1"<<endl;
	}
}
