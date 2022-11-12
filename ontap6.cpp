#include<bits/stdc++.h>
using namespace std;

int n, k, a[100], b[100];
vector < string > v;

int kt(){
	for(int j = 1; j <= k - 1; j++) return a[b[j]] > a[b[j + 1]];
}

void ql(int i){
	for(int j = b[i - 1] + 1; j <= n - k + i; j++){
		b[i] = j;
		if(i == k){
			if(kt()){
				string s = "";
				for(int j = 1; j <= k; j++){
					s += to_string(a[b[i]]);
					s += " ";
				} 
				v.push_back(s);
			}
		}
		else ql(i + 1);
	}
}

int main(){
	for(int i = 1; i <= n; i++) cin >> a[i];
	for( k = 2; k <= n; k++) ql(1);
	sort(v.begin(), v.end());
	for(auto x : v){
		cout << x << endl;
	}
}
