#include<bits/stdc++.h>
using namespace std;

int main(){
	int t, n, x, kt;
	cin >> t;
	while(t--){
		cin >> n >> x;
		kt = 0;
		for(int i=0 ;i < n; i++){
			int a;
			cin >> a;
			if(x == a) kt = i+1;
		}
		cout << kt << endl;
	}
}
