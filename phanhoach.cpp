#include<bits/stdc++.h>
using namespace std;

void xuly(int a[],int n){
	int i=0;
	int chot=a[n-1];
	for(int k=0;k<n-1;k++){
		if(a[k]<chot){
			swap(a[i],a[k]);
			i++;
		}
	}
	swap(a[i],a[n-1]);
	for(int k=0;k<n;k++){
		if(i==k){
			cout<<"["<<a[k]<<"]"<<" ";
		}
		else cout<<a[k]<<" ";
	}
}

int main(){
	int n, a[100];
	cin>>n;
	for(int i=0;i<n;i++) cin>>a[i];
	xuly(a,n);
}
