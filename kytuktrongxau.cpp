#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n, k, dem=0;
		cin>>n>>k;
		char x='A';
		while(k%2==0){
			dem++;
			k/=2;	
		}
		x+=dem;
		cout<<x<<endl;
	}
}
