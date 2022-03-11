#include<bits/stdc++.h>
using namespace std;

int main(){
	int n, a[105], sum=0;
	cin>>n;
	for(int i=0; i<n ;i++) cin>>a[i];
	sort(a, a+n, greater<int>());
	for(int i=0;i<n;i++){
		if(a[i]-i>0) sum+=a[i]-i;
		else break;
	}
	cout<<sum;
}
