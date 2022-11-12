#include<bits/stdc++.h>
using namespace std;



int main(){
	int n;
	cin>>n;
	pair <int, int> a[n];
	for(int i=0;i<n;i++) cin>>a[i].first>>a[i].second;
	sort(a,a+n);
	int sum=-1;
	for(int i=1;i<n;i++){
		cout << a[i].first << " " << a[i].second << endl;
	}
	for(int i=1;i<n;i++){
		sum=max (sum, a[i].first);
		sum+=a[i].second;
	}
	cout<<sum;
}
