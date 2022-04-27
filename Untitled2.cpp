#include<bits/stdc++.h>
using namespace std;

int ngto(int n){
	if(n < 2) return 0;
	for(int i = 2; i <= sqrt(n) ; i++){
		if(n % i == 0) return 0;
	}
	return 1;
}
int tcs(int n){
	int tong = 0;
	while(n > 0){
		tong += n%10;
		n/=10;
	}
	return tong;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int sum=0, i=2, m=n;
		while(n > 1){
			if( n % i == 0){
				int j=i;
				while( j > 0){
					sum+= j%10;
					j/=10;
				}
				n/=i;
				
			} else i++;
		}
		if( ngto(m)==0 && sum ==tcs(m)) cout<<"YES"<<endl;
		else cout <<"NO"<<endl;
	}
}
