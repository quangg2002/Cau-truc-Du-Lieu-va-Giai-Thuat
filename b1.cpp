#include<bits/stdc++.h>
using namespace std;

int gt(int n){
	int sum=1;
	for(int i=1;i <= n ;i++) sum*=i;
	return sum;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int m=n;
		int tong =0;
		while(n>0){
			int i= n%10;
			tong += gt(i);
			n/=10;
		}
		if(m==tong) cout <<"Yes"<<endl;
		else cout <<"No"<< endl;
	}
}
