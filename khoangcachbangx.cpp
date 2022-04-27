#include<bits/stdc++.h>
using namespace std;
int b[1000000];
void kc(){
	int n,x;
	cin>>n>>x;
	int a[n+5];
	memset(b,0,sizeof b);
	for(int i=0;i<n;i++) {
		cin>>a[i];
		b[a[i]]++;
	}
	for(int i=0;i<n;i++){
		if(b[abs(a[i]-x)]!=0){
			cout<<"1"<<endl;
			return;
		}
	}
	cout<<"-1"<<endl;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		kc();
	}
	return 0;
}
