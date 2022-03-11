#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n, a[25];
		cin>>n;
		for(int i=0;i<n;i++) cin>>a[i];
		sort(a,a+n);
		long long t1=0, t2=0;
		for(int i=0;i<n;i++){
			if(i%2==0){
				t1=t1*10+a[i];
			}else{
				t2=t2*10+a[i];
			}
		}
		cout<<(long long) t1+t2<<endl;
	}
}
