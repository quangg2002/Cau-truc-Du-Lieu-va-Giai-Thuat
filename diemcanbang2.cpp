#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n, vt=-1, a[100005];
		long long sum=0, l=0;
		cin>>n;
		for(int i=0;i<n;i++){
			cin>>a[i];
			sum+=a[i];
		}
		for(int i=0;i<n;i++){
			sum-=a[i];
			if(sum==l){
				vt=i+1;
				break;
			}
			l+=a[i];
		}
		cout<<vt<<endl;
	}
}
