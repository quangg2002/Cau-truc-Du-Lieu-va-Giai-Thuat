#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n],b[n];
		long long s=0;
		for(int i=0;i<n;i++){
			cin>>a[i];
			b[i]=1;
		}
		for(int i=0;i<n;i++){
			int dem=1;
			if(b[i]==1){
				for(int j=i+1;j<n;j++){
					if(a[i]==a[j]){
						dem++;
						b[j]=0;
					}
				}
				if(dem>=2) s+=dem;
			}
		}
		cout<<s<<endl;
	}
}
