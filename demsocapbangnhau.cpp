#include<bits/stdc++.h>
using namespace std;

int main(){
	int n, a[100005], b[100005]={0};
	long long sum=0;
	cin>>n;
	for(int i=0; i<n; i++){
		cin>>a[i];
		b[a[i]]++;
	}
	for(int i=0;i<100005;i++){
		if(b[i] != 0){
			 sum+=b[i] * (b[i]-1) /2;
		}
	}
	cout<<sum;
}
