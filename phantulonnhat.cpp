#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,x, i=0;
		cin >> n >> x;
		int a[n];
		for(int i=0;i<n;i++) cin>>a[i];
		sort(a, a+n , greater<int>());
		while(x > 0){
			cout << a[i++] << " ";
			x--;
		}
		cout << endl;
	}
}
