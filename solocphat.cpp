#include<iostream>
using namespace std;
int main(){
	int t,n;
	cin>>t;
	while(t--){
		int ok=1;
		cin>>n;
		while(n!=0){
			int x=n%10;
			if( x!=0 && x!=6 && x!=8){
				ok=0;
				break;
			}
			n/=10;
		}	
		if(ok==0) cout<<"NO"<<endl;
		else cout<<"YES"<<endl;
	}
}
