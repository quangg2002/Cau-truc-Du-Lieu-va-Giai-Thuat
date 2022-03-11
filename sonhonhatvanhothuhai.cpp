#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n, st1=INT_MAX, st2=INT_MAX;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)	cin>>a[i];
		for(int i=0;i<n;i++)	if(a[i] < st1)	st1=a[i];
		for(int i=0;i<n;i++)	if(a[i] > st1 && a[i]<st2) st2=a[i];
		if(st2!=INT_MAX) cout<<st1<<" "<<st2<<endl;
		else cout<<"-1"<<endl;
	}
}
