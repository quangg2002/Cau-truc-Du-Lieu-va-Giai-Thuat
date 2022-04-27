#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		long long n,kt=0;
		cin>>n;
		long long  a[n];
		long long s=0,smax=0;
		for(int i=0;i<n;i++) cin>>a[i];
		for(int i=0;i<n;i++){
			if(a[i]>0){
				kt=1;
				break;
			}
		}
		if(kt==0) cout<<"-1";
		else{
			for(int i=0;i<n;i++){
				s+=a[i];
				if(s>smax) smax=s;
				if(s<0) s=0;
			}
			cout<<smax;
		}
		cout<<endl;
	}
}
	
