#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int a[1005], b[1005], n, m, d1=0, d2=0, x, MAX=-1000000000, kt=0;
		cin>>n >> m;
		for(int i=0;i<n;i++){
			cin>>x;
			if(x<0) a[d1++]=x;
			else b[d2++]=x;
			MAX=max(MAX,x);
		}
		for(int i=0;i<d1;i++){
			if(a[i]==MAX && kt==0){
				cout<<m<<" ";
				kt=1;
			}
			cout<<a[i]<<" ";
		}
		for(int i=0;i<d2;i++){
			if(b[i]==MAX && kt==0){
				cout<<m<<" ";
				kt=1;
			}
			cout<<b[i]<<" ";
		}
		cout<<endl;
	}
}
