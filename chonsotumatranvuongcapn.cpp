#include<bits/stdc++.h>
using namespace std;

int main(){
	int n, k;
	cin >> n >> k;
	int mt[100][100], a[n+5];
	for(int i = 1; i <= n ; i++) a[i] = i;
	for(int i = 1; i <= n ; i++){
		for(int j = 1; j <= n ; j++){
			cin >> mt[i][j];
		}
	} 
	vector<vector<int>> v;
	do{
		int sum = 0;
		for(int i = 1; i <= n; i++) sum += mt[i][a[i]];
		if(sum == k){
			vector< int >tmp(a + 1,a + n + 1);
			v.push_back(tmp);
		}
	}while(next_permutation(a + 1, a + n + 1));
	cout << v.size() << endl;
	for(vector< int > x : v){
		for(auto y : x){
			cout << y << " ";
		}
		cout << endl;
	}
}
