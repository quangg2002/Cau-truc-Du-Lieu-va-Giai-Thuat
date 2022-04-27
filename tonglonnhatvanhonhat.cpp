#include<bits/stdc++.h>
using namespace std;
long long tnn(long long c){
	int a[20];
	long long i=0,dem=0,sum=0,p=1;
	while(c>0){
		int x=c%10;
		a[i++]=x;
		c/=10;
		dem++;
	}
	for(int i=0;i<dem;i++){
		if(a[i]==6) a[i]=5;
	}
	for(int i=0;i<dem;i++){
		sum=sum+a[i]*p;
		p*=10;
	}
	return sum;
}
long long tln(long long d){
	int a[20];
	long long i=0,dem=0,sum1=0,p=1;
	while(d>0){
		int x=d%10;
		a[i++]=x;
		d/=10;
		dem++;
	}
	for(int i=0;i<dem;i++){
		if(a[i]==5) a[i]=6;
	}
	for(int i=0;i<dem;i++){
		sum1=sum1+a[i]*p;
		p*=10;
	}
	return sum1;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		long long a,b,m,n;
		cin>>a>>b;
		m=a;
		n=b;
		cout<<tnn(a)+tnn(b)<<" "<<tln(m)+tln(n)<<endl;
	}
}

