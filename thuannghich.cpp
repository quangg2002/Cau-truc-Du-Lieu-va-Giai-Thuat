#include<iostream>
using namespace std;
int tn(long long n){
	long long s=0,k=n;
	while(n!=0){
		int x=n%10;
		s=x+s*10;
		n/=10;
	}
	if(s==k) return 1;
	return 0;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		long long n;
		cin>>n;
		if(tn(n)) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
}
