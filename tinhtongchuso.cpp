#include<iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		long long n,sum=0;
		cin>>n;
		while(n!=0){
			sum+=n%10;
			n/=10;
		}
		while(sum>=10){
			long long c=sum,d=0;
			while(c!=0){
				d+=c%10;
				c/=10;
			}
			sum=d;
		}
		cout<<sum<<endl;
	}
}
