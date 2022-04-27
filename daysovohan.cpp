#include<bits/stdc++.h>
using namespace std;

long long mod = 1e9 + 7;
struct matran{
	long long x[10][10];
};
int n;
struct matran operator * (matran a, matran b){
	struct matran c;
	for(int i = 0; i < 2; i++){
		for(int j = 0; j < 2; j++){
			c.x[i][j] = 0;
			for(int k = 0; k < 2; k++){
				c.x[i][j] = (c.x[i][j] + (a.x[i][k] * b.x[k][j]) % mod) % mod;
			}
		}
	}
	return c;
}

matran mu(matran a, long long m){
	if(m == 1) return a;
	matran A = mu(a, m/2);
	if(m % 2 == 0) return A * A;
	return a * A * A;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n;
		matran X;
		X.x[0][0] = 1; 	X.x[0][1] = 1; 	X.x[1][0] = 1; 	X.x[1][1] = 0;
		matran KQ = mu(X, n);
		cout << KQ.x[1][0] << "\n";
	}
}
