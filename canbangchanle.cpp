#include<iostream>
#include<cmath>
using namespace std;
int cbcl(int n){
	int sc=0,sl=0;
	while(n!=0){
		int x=n%10;
		if(x%2==0) sc++;
		if(x%2==1) sl++;
		n/=10;
	}
	if(sc==sl) return 1;
	return 0;
}
int main(){
	int n,dem=0;
	cin>>n;
	int x=pow(10,n-1), y=pow(10,n);
	for(int i=x;i<=y;i++){
		if(cbcl(i)==1){
			cout<<i<<" ";
			dem++;
		}
		if(dem%10==0) cout<<"\n";
	}
}
