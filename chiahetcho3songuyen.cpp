#include<iostream>
#include<cmath>
using namespace std;
long long ucln(long long a, long long b){
	while(b!=0){
		long long t=a%b;
		a=b;
		b=t;
	}
	return a;
}
long long bcnn(long long a,long long b){
	return (a*b)/ucln(a,b);
}
int main(){
	int t;
	cin>>t;
	while(t--){
		long long x,y,z,n;
		cin>>x>>y>>z>>n;
		long long a=bcnn(x,y), b=bcnn(a,z);
		long long d=pow(10,n), c=pow(10,n-1);
		if(b<c){
			if(c%b==0) cout<<c<<endl;
			else{
				long long e=b*(c/b+1);
				if(e<d) cout<<e<<endl;
				else cout<<"-1"<<endl;
			}
		}else{
			if(b<d) cout<<b<<endl;
			else cout<<"-1"<<endl;
		}
	}
}
