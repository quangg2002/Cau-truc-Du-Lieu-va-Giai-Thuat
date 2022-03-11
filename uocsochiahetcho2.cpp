#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		long long n,d=0;
		cin>>n;
		for(int i=1;i<=sqrt(n);i++){
			if(n%i==0){
				if(i%2==0) d++;
				long long k=n/i;
				if(k%2==0&&k!=sqrt(n)) d++;
			}
		}
		cout<<d<<endl;
	}
}
