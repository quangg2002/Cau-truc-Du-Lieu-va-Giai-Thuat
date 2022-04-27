#include<bits/stdc++.h>
using namespace std;

int main(){
	int b[1000]={0}, x, kt=0, n, MAX=-1;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>x;
		b[x]++;
		MAX=max(x, MAX);
	}
	for(int i=1;i<=MAX;i++){
		if(b[i]==0){
			cout<<i<<endl;
			kt=1;
		}
	}
	if(kt==0) cout<<"Excellent!";
}
