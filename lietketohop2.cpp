#include<bits/stdc++.h>
using namespace std;

int ok = 1 , k,  b[100];
int main(){
	int n;
	cin >> n >> k;
	set < int > s;
	int a[n+5], d = 1, ok = 1;
	for(int i = 0; i < n; i++){
		int x;
		cin >> x;
		s.insert(x);
	}
	for(auto x : s) a[d++] = x;
	for(int i = 1; i < d ; i++) b[i] = i;
	while(ok){
		for(int i = 1; i <= k; i++ ) cout << a[b[i]] <<" ";
		cout << endl;
		int i = k;
		while(i > 0 && b[i] == (d-1) - k + i) i--;
		if(i == 0) ok = 0;
		else{
			b[i]++;
			for(int j = i + 1; j <= k; j++) b[j]= b[j-1] + 1;
		}
	}
}
