#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,a[1004]; 
		cin>>n;
		for(int i=0;i<n;i++) cin>>a[i];
		int trai=0, phai=n-1,  dem=0;
		while(trai<=phai){
			if(a[trai]==a[phai]){
				trai++;		phai--;
			}
			else if(a[trai]<a[phai]){
				trai++;
				a[trai]+=a[trai-1];
				dem++;
			}
			else{
				phai--;
				a[phai]+=a[phai+1];
				dem++;
			}
		}
		cout<<dem<<endl;
	}
}
