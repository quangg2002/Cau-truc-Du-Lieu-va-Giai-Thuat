#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,a[105];
		cin>>n;
		for(int i=0;i<n;i++) cin>>a[i];
		long long max=a[0];
		for(int i=0;i<n-1;i++){
			long long tich=1;
			for(int j=i;j<n;j++){
				tich*=a[j];
				if(tich>max) max=tich;
			}
		}
		cout<<max<<endl;
	}
}
