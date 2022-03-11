#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		long long n,k,sum=0;
		cin>>n>>k;
		for(int i=1;i<=n;i++){
			sum+=i%k;
		}
		cout<<sum<<endl;
	}
}
