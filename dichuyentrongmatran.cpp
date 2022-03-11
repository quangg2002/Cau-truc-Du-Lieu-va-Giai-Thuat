#include<bits/stdc++.h>
using namespace std;

int d , m, n, a[100][100];
void ql(int i, int j){
	if(i == n - 1 && j == m - 1) d++;
	if(i + 1 < n)	ql(i + 1, j);
	if(j + 1 < m) 	ql(i, j + 1);
}
int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n >> m;
		d = 0;
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m ; j++){
				cin >> a[i][j];
			}
		}
		ql(0,0);
		cout << d << endl;
	}
}
