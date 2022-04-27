#include<bits/stdc++.h>
using namespace std;

int c[100], d1[100], d2[100], dem, n, a[100], tong, b[9][9];
void ql(int i){
	for(int j = 1; j <= n; j++){
		if(c[j] == 1 && d1[i - j + n] == 1 && d2[i + j -1] == 1){
			a[i] = j;
			c[j] = d1[i - j + n] = d2[i + j - 1] = 0;
			if(i == n){
				int sum = 0;
				for(int i = 1; i <= n; i++) sum += b[i][a[i]];
				tong = max(tong, sum);
			}
			else ql(i + 1);
			c[j] = d1[i - j + n] = d2[i + j - 1] = 1;
		}
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		tong = 0;
		n = 8;
		for(int i = 1; i <= 99 ; i++) c[i] = d1[i] = d2[i] = 1;
		for(int i = 1; i <= 8 ; i++){
			for(int j = 1; j <= 8 ; j++){
				cin >> b[i][j];
			}
		}
		ql(1);
		cout << tong << endl;
	}
}
