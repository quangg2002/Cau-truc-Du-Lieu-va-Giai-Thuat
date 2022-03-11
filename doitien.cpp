#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,dem=0;
		int a[10]={1000,500,200,100,50,20,10,5,2,1};
		cin>>n;
		for(int i=0;i<10;i++){
			while(n>=a[i]){
				n-=a[i];
				i--;
				dem++;	
			}
		}
		cout<<dem<<endl;
	}
}
