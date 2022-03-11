#include<bits/stdc++.h>
using namespace std;

int main(){
	int n, d=0;
	cin >> n;
	int a[n+5];
	for(int i=0;i<n;i++) cin >> a[i];
	while( d < 5){
		next_permutation(a,a+n);
		for(int i=0;i<n;i++) cout << a[i] << " ";
		d++;
		cout << endl;
	}
}
