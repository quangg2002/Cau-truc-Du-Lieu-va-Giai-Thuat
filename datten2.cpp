#include<bits/stdc++.h>
using namespace std;

int n, k;
int a[100];
void in(){
	for(int i = 1; i <= k; i++) cout << (char)(a[i] + 'A' -1);
	cout << endl;
}
void ql(int i){
	for(int j = a[i-1] +1; j <= n - k +i; j++){
		a[i] = j;
		if(i == k) in();
		else ql(i+1);
	}
}
int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n >> k;
		ql(1);
	}
}
