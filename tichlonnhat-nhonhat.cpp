#include<bits/stdc++.h>
using namespace std;

int main(){
	int t, n, m, x, y;
	cin >> t;
	while(t--){
		cin >> n >> m;
		x = INT_MAX; y = INT_MIN;
		for(int i=0 ;i < n ;i++ ){
			int t;
			cin >> t;
			if(y < t) y = t;
		}
		for(int i=0 ;i < m ;i++ ){
			int z;
			cin >> z;
			if(z < x) x = z;
		}
		cout << (long long) x * y << endl;
	}
}
