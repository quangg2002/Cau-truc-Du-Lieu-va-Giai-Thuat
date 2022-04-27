#include<bits/stdc++.h>
using namespace std;

int ql(int n){
	if(n <= 1) return 0;
	int x = 1 + n % 2 + ql(n / 2);
	int y = 1 + n % 3 + ql(n / 3);
	return min(x, y);
}
int main(){
	int t, n;
	cin >> t;
	while(t--){
		cin >> n;
		cout << ql(n) << endl;
	}
}
