#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n],b[n],m=0,vitri;
		for(int i=0;i<n;i++){
			cin>>a[i];
			b[m++]=a[i];
		}
		sort(a,a+n);
		for(int i=0;i<n;i++) if(a[i]!=b[i])  vitri=i+1;
		for(int i=0;i<n;i++){
			if(a[i]!=b[i]){
				cout<<i+1<<" ";
				break;
			}
		}
		cout<<vitri<<endl;
	}
}
