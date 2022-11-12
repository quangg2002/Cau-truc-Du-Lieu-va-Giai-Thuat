#include<bits/stdc++.h>
using namespace std;

int n, m, a[100], dd[1000];
vector < string > v;
long long cnt = INT_MAX;

void ql(int i){
	for(int j = 1; j <= n; j++){
		if(dd[j] == 0){
			dd[j] = 1;
			a[i] = j;
			if(i == n){
				long long maax = 0, miin = 0;
				for(auto x : v){
					string s = "";
					for(int j = 1; j <= n; j++) s += x[a[j] - 1];
					maax = max(maax, stoll(s));
					miin = min(miin, stoll(s));
				}
				cnt = min(cnt, abs(maax - miin));
			}
		}
		else ql(i + 1);
		dd[j] = 0;
	}
}

int main(){
	cin >> n >> m;
	for(int i = 0; i < n; i++){
		string s;
		cin >> s;
		v.push_back(s);
	}
	ql(1);
	cout << cnt;
}
