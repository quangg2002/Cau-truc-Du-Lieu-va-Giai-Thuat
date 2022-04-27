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
	cin >>t;
	while(t--){
		long long a,b;
		cin>>a>>b;
		cout <<LCM(a,b)<<' '<<GCD(a,b)<<endl;
	}
	
}
