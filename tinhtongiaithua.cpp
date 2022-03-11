#include<iostream>
using namespace std;
int main(){
	int n; cin>>n;
	long long s=0,giaithua=1;
	for(int i=1;i<=n;i++){
		giaithua*=i;
		s+=giaithua;
	}
	cout<<s;
}
