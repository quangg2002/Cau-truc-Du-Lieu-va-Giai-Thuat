#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	double a[105];
	cin>>n;
	for(int i=0;i<n;i++) cin>>a[i];
	sort(a,a+n);
	double sum=0,dem=0;
	for(int i=0;i<n;i++){
		if(a[i]!=a[0]&&a[i]!=a[n-1]){
			sum+=a[i];
			dem++;
		}
	}
	cout<<fixed<<setprecision(2)<<sum/dem;
}
