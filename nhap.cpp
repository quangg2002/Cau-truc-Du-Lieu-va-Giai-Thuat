#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		long long n,k,d=0,ok=0;
		cin>>n>>k;
		for(int i=2;i<=sqrt(n);i++){
			while(n%i==0){
				n/=i;
				d++;
				if(d==k){
					cout<<i<<endl;
					ok=1;
					break;
				}
			}
			if(d==k) break;
		}
		if(n>1)	d++;
		if(d==k&&ok==0) cout<<n<<endl;
		if(k>d) cout<<"-1"<<endl;
	}
}
