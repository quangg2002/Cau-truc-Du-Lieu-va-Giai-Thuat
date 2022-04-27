#include<bits/stdc++.h>
using namespace std;

int n,ok=1, a[100];
void sinh(){
	int i=n-1, k=n;
	while(i>=1 && a[i]>a[i+1]) i--;
	if(i==0) ok=0;
	else{
		while(a[k]<a[i]) k--;
		swap(a[i],a[k]);
		int l=i+1, r=n;
		while(l<r){
			swap(a[l], a[r]);
			l++, r--;
		}
	}
}

int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n;
		int dem=0;
		for(int i=1;i<=n;i++) a[i]=i;
		while(ok){
			for(int i=1;i<=n;i++) v[dem].push_back(a[i]);
			cout<<" ";
			sinh();
			dem++;
		}
		dem=0;
		for(int i=v.size()-1;i>=0;i--){
			for(int j=0;j<v[i].size();j++){
				cout << v[i][j];
			}
			cout << " ";
		}
		ok=1;
		cout<<"\n";
	}
}
