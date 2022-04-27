#include<iostream>
using namespace std;
long long GCD(long long a,long long b){
	while(b>0){
		long long t=a%b;
		a=b;
		b=t;
	}
	return a;
}
long long LCM(long long a,long long b){
	return (a*b)/GCD(a,b);
}
int main(){
	int t;
	cin>>t;
	while(t--){
		long long n;
		cin>>n;
		long long s=1;
		for(int i=2;i<=n;i++){
			s=LCM(s,i);
		}
		cout<<s<<endl;
	}
}
