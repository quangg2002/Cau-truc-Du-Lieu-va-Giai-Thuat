#include<iostream>
using namespace std;
long long ucln(long long a,long long b){
	while(b!=0){
		long long t=a%b;
		a=b;
		b=t;
	}
	return a;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		long long a,x,y;
		cin>>a>>x>>y;
		long long l=ucln(x,y);
		for(int i=1;i<=l;i++){
			cout<<a;
		}
		cout<<endl;
	}
}
