#include<bits/stdc++.h>
using namespace std;

int n;
long long m;
long long mod = 1e9 + 7;
struct matran{
	long long x[10][10];
};
struct matran operator * (matran A, matran B){
	struct matran C;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			C.x[i][j] = 0;
			for(int k = 0; k < n; k++){
				C.x[i][j] = (C.x[i][j] + (A.x[i][k] * B.x[k][j]) % mod) % mod;
			}
		}
	}
	return C;
}

matran mu(matran a, long long m){
	if(m == 1) return a;
	matran X = mu(a, m/2);
	if(m % 2 == 0) return X * X;
	return a * X * X;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n >> m;
		matran A;
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++) cin >> A.x[i][j];
		}
		matran X = mu(A, m);
		long long sum = 0;
		for( int i = 0; i < n; i++)  sum =(sum + X.x[n - 1][i]) % mod;
		cout << sum << endl;
	}
}
