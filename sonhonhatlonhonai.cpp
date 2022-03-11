#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<int>b(n);
		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
			b[i]=a[i];
		}
		sort(b.begin(),b.end());
		for(int x:a){
			auto it =upper_bound(b.begin(),b.end(),x);
			if(it!=b.end()) cout<<*it<<" ";
			else cout<<"_"<<" ";
		}
		cout<<endl;
	}
}
