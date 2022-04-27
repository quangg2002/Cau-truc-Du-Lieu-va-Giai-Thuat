#include<bits/stdc++.h>
using namespace std;

int main(){
//	int t;
//	cin>>t;
//	while(t--){
		int n;
		cin>>n;
		int a[n+5],b[n+5];
		for(int i=1;i<=n;i++) a[i]=i;
		for(int i=1;i<=n;i++) cin >> b[i];
		sort(b+1, b+n+1);
		do{
			for(int i=1;i<=n;i++) cout<<b[a[i]] <<" ";
			cout<< endl;
		}while(next_permutation(a+1,a+n+1));
//	}
}
