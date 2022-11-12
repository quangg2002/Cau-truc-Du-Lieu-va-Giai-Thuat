#include<bits/stdc++.h>
using namespace std;

int n, a[100];
char c;
vector < string > v;

int kt(){
	int d0 = 0, d1 = 0, d0max = 0, d1max = 1;
	for(int i = 1; i <= n ; i++){
		if(a[i] == 1){
			d0 = 0;
			d1 ++;
			d1max = max(d1max, d1);
		}
		if(a[i] == 0){
			d1 = 0;
			d0 ++;
			d0max = max(d0max, d0);
		}
	}
	if(d1max > d0max && d1max > 4) return 1;
	return 0;
}

void sinh(int i){
	for(int j = 0; j <= 1; j++){
		a[i] = j;
		if(i == n){
			if( kt() ){
				string s = "";
				if(c == 'X'){
					for(int j = 1; j <= n; j++){
						if(a[j] == 1) s += 'X';
						else s += 'O';
					}
				}
				if(c == 'O'){
					for(int j = 1; j <= n; j++){
						if(a[j] == 1) s += 'O';
						else s += 'O';
					}
				}
				v.push_back(s);
			} 
		}
		else sinh(i + 1);
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		v.clear();
		cin >> n >> c;
		sinh(1);
		for(auto x : v) cout << x << "\n";
	}
}
