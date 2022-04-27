#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,a[1005];
		cin>>n;
		for(int i=0;i<n;i++) cin>>a[i];
		int dem=0;
		while(1){
			int ktra=0, ok=0;
			for(int i=0;i<n;i++){
				if(a[i] %2 !=0){
					ktra=1;
					break;
				}
				if(a[i]==0) ok++;
			}
			if(ok==n) break;
			if(ktra==1){
				for(int i=0;i<n;i++){
					if(a[i] %2 !=0){
						a[i]-=1;
						dem++;
					}
				}
			}else{
				for(int i=0;i<n;i++) a[i]/=2;
				dem++;
			}
		}
		cout<<dem<<endl;
	}
}
