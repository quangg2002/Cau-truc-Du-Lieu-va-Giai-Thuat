#include<iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,ok=1,d=0;
		cin>>n;
		for(int i=2;i<=n;i++){
			if(n%i==0)	d++;
			int dem=0;
			while(n%i==0){
				dem++;
				n/=i;
				if(dem==2){
					ok=0;
					break;
				}
			}
			if(dem==2) break;
		}
		if(ok==1&&d==3) cout<<"1"<<endl;
		else cout<<"0"<<endl;
	}
}
