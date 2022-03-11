#include<iostream>
using namespace std;
#define run() int t;cin>>t;while(t--)
main(){
	run(){
		int n,d;
		cin>>n>>d;
		int a[n],b[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		for(int i=0;i<n;i++){
			cout<<a[(i+d)%n]<<" ";	
		}
		cout<<endl;
	}
}
