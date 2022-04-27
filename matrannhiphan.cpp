#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a[n][3],d=0;
	for(int i=0;i<n;i++){
		for(int j=0;j<3;j++){
			cin>>a[i][j];
		}
	}
	for(int i=0;i<n;i++){
		int d1=0, d0=0;
		for(int j=0;j<3;j++){
			if(a[i][j]==1) d1++;
			if(a[i][j]==0) d0++;
		}
		if(d1>d0) d++;
	}
	cout<<d;
}
