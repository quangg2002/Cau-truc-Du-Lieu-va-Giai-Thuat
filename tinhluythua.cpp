#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		long long x,p,y;
		cin>>x>>y>>p;
		long long sum=1;
		for(int i=1;i<=y;i++){
			sum=(sum*x)%p;
		}
		cout<<sum<<endl;
	}
}
