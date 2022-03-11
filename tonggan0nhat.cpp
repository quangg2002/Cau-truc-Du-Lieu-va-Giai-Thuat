#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)	cin>>a[i];
		long long sum=abs(a[0]+a[1]),t;
		for(int i=0;i<n-1;i++){
			for(int j=i+1;j<n;j++){
				if(abs(a[i]+a[j])<sum){
					sum=abs(a[i]+a[j]);
					t=a[i]+a[j];
				}	
			}
		}
		cout<<t<<endl;
	}
}
