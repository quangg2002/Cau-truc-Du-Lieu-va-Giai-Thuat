#include<bits/stdc++.h>
using namespace std;

int main(){
	int n, m, x[100], y[100], i=0, j=0;
	cin>>n>>m;
	for(int i=0;i<n;i++) cin>>x[i];
	for(int i=0;i<m;i++) cin>>y[i];
	while(i<n && j<m){
		if(x[i] <= y[j]){
			cout<<"b"<<i+1<<" ";
			i++;
		}
		else{
			cout<<"c"<<j+1<<" ";
			j++;
		}
	}
	while(i < n){
		cout<<"b"<<i+1<<" ";
		i++;
	}
	while(j < m){
		cout<<"c"<<j+1<<" ";
		j++;
	}
	
}
