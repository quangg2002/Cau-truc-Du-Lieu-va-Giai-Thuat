#include<bits/stdc++.h>
using namespace std;

int a[100], n, d = 0;
vector < vector <string > >v;
vector < string > res;
string s;
void ql(int i){
	for(int j = 0; j <= 1; j++){
		a[i] = j;
		if(i == n){
			string x ="";
			for(int k = 1; k <= n ; k++)	if(a[k] == 1) x += s[k - 1];
			res.push_back(x);
			v.push_back(res);
			res.clear();
		}else ql(i+1);
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n;
		cin >> s;
		ql(1);
		sort(v.begin(), v.end());
		for( auto y : v){
			for(int i = 0; i < y.size(); i++) cout << y[i];
			cout << " ";
 		}
 		cout << endl;
		v.clear();
	}
}
