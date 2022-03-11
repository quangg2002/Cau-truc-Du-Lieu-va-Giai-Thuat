#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n+1];
		for(int i=0;i<=n;i++)	a[i]= i;
		vector<string> v;
		int dem=0;
		while(true){
			for(int i=1;i<=n;i++)	v[dem].push_back(a[i]);
			int i = n-1;
			while(a[i]> a[i+1]) i--;
			if(i==0)	break;
			else{
				int k = n;
				while(true){
					if(a[i] < a[k]) break;
					k--;
				}
				swap(a[i],a[k]);
				int l= i+1, r= n;
				while(l<r){
					swap(a[l], a[r]);
					l++ , r--;
				}
			}
			dem++;
		}
		for(int i=v.size()-1;i>=0;i--){
			for(int j=0;j<v[i].size();j++){
				cout << v[i][j];
			}
			cout << " ";
		}
	}
}
