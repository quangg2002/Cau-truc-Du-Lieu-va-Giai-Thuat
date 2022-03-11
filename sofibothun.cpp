#include<iostream>
#include<cmath>
using namespace std;

long long fibo(int n){
	long long f0= 0, f1= 1;
	for(int i= 2; i<= n; i++){
		long long tmp= f1;
		f1+= f0;
		f0= tmp;
	}
	return f1;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		cout<< fibo(n)<< endl;
	}
}
