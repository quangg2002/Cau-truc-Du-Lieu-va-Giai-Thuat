#include <bits/stdc++.h>
using namespace std;

int n;
long long k, mod = 1e9 + 7;

struct matran{
	long long x[10][10];
};

struct matran operator * (matran A, matran B){
	struct matran C;
	for(int i = 0; i < n; i++){
		for(int j = 0 ; j < n; j++){
			C.x[i][j] = 0;
			for(int k = 0 ; k < n; k++){
				C.x[i][j] = ((A.x[i][k] * B.x[k][j]) % mod + C.x[i][j])  % mod;
			}
		}
	}
	return C;
}

matran mu(matran A, long long k){
	if(k == 1) return A;
	matran X = mu(A, k/2);
	if(k % 2 == 0) return X * X;
	return A * X * X;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		long long sum = 0;
		cin >> n >> k;
		matran A;
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++) cin >> A.x[i][j];
		}
		matran X = mu(A, k);
		for(int i = 0; i < n; i++)	sum = (sum + X.x[n - i - 1][i]) % mod;
		cout << sum << endl;
	}
}
