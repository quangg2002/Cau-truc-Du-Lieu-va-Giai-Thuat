#include<bits/stdc++.h>
using namespace std;

int main(){
	int t,n,k,a[1000006];
	cin>>t;
	while(t--){
		cin>>n>>k;
		for(int i=0;i<n;i++) cin>>a[i];
		multiset < int > ms;
		for(int i=0;i<k;i++) ms.insert(a[i]);
		for(int i=k;i<n;i++){
			cout<<*ms.rbegin()<<" ";
			ms.erase(ms.find(a[i-k]));
			ms.insert(a[i]);
		}
		cout<<*ms.rbegin()<<endl;
	}
}
