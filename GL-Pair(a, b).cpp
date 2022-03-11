#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		long long ucln,lcm,dem=0;
		cin>>ucln>>lcm;
		int tich=ucln*lcm;
		for(int i=1;i<=lcm;i++){
			if(tich%i==0){
				int x=tich/i;
				if(__gcd(i,x)==ucln) dem++;
			}
		}
		cout<<dem<<endl;
	}
}
