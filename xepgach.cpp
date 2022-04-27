#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n, a[100];
		cin>>n;
		for(int i=0;i<n;i++) cin>>a[i];
		sort(a, a+n, greater<int>());
		int docung=a[0],dem=0;
		for(int i=0;i<n;i++){
			if(docung >= 1){
				dem++;
				docung= min(docung-1, a[i]);
			}
			else break;
		}
		cout<<dem<<endl;
	}
}
