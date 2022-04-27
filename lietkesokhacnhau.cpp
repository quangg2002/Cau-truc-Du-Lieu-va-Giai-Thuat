#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,a[1005],b[1005];
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
		b[i]=1;
	}
	sort(a,a+n);
	for(int i=0;i<n;i++){
		if(b[i]==1){
			for(int j=i+1;j<n;j++){
				if(a[i]==a[j]) b[j]=0;
			}
			cout<<a[i]<<" ";
		}
	}
}
