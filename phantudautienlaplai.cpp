#include<bits/stdc++.h>
using namespace std;
int b[1000005];
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,ok=0,vitri=-1;
		cin>>n;
		int a[n+5];
		set<int> s;
		for(int i=1;i<=n;i++)	cin>>a[i];
		for(int i=1;i<=n;i++){
			s.insert(a[i]);
			if(i-s.size()==1){
				vitri=i; 
				break;
			} 
		}
		
		if(vitri==-1) cout<<"-1"<<endl;
		else cout<<a[vitri]<<endl;
	}
}
