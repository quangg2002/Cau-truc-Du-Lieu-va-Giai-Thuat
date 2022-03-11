#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,p,d=0;
		cin>>n>>p;
		for(int i=1;i<=n;i++){
			int a=i;
			while(a%p==0){
				d++;
				a/=p;
			}
		}
		cout<<d<<endl;
	}
}
