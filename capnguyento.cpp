#include<bits/stdc++.h>
using namespace std;
int nto(int n){
	if(n<2) return 0;
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0) return 0;
	}
	return 1;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		for(int i=1;i<=n/2;i++){
			if(nto(i)==1&&nto(n-i)==1) {
				cout<<i<<" "<<n-i;
				break;
			}
		}
		cout<<endl;
	}
}
