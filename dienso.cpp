#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n, a[100005], dem=0;
		cin>>n;
		for(int i=0;i<n;i++)	cin>>a[i];
		sort(a,a+n);
		vector<int> b(a[n-1]+1,0);
		for(int i=0;i<n;i++) b[a[i]]++;
		for(int i=a[0];i<=a[n-1];i++)	if(b[i]==0) dem++;
		cout<<dem<<endl;
	}
}
