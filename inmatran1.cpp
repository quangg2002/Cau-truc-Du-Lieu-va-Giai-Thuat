#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[100][100]={0};
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				cin>>a[i][j];
			}
		}
		for(int i=0;i<n;i++){
			if(i%2==0){
				for(int j=0;j<n;j++){
					cout<<a[i][j]<<" ";
				}
				if(i<n-1){
					for(int k=n-1;k>=0;k--){
						cout<<a[i+1][k]<<" ";
					}
				}
			}
		}
		cout<<endl;
	}
}
