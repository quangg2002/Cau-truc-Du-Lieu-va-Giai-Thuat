#include<bits/stdc++.h>
using namespace std;
long long sum=0;
void tong(int n){
	int x=0;
	for(int i=2;i*i<=n;i++){
		while(n%i==0){
			x+=i;
			n/=i;
		}
	}
	if(n>1) x+=n;
	sum+=x;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int x;
		cin>>x;
		tong(x);
	}
	cout<<sum;
}

