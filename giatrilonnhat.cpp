#include<bits/stdc++.h>
using namespace std;

int main(){
	int n, a[50005], vt1=-1, vt2;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
		if(a[i]>0) vt2=i;
	}
	for(int i=0;i<n;i++){
		if(a[i]>0){
			vt1=i;
			break;
		}
	}
	if(vt1==-1) cout<<0;
	else{
		long long sum=0;
		for(int i=vt1;i<=vt2;i++){
			if(a[i]>0) sum+=a[i]*2;
		}
		cout<<sum;
	}
}
