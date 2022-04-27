#include<bits/stdc++.h>
using namespace std;

vector < int > nt;
vector < vector < int > > v;
int n, p, k, d, dd[100] = {0}, a[100];
int ngto(int n){
	if(n < 2) return 0;
	for(int i = 2; i <= sqrt(n); i++) if(n % i == 0) return 0;
	return 1;
}
void ql(int sum, int m, int h){
	if(sum == k && m == n){
		vector < int > res(a, a + m);
		v.push_back(res);
	}
	for(int i = h; i < d; i++){
		if(sum + nt[i] <= k){
			a[m] = nt[i];
			ql(sum + nt[i], m + 1, i + 1);
		}
	}
}
int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n >> p >> k;
		for(int i = p + 1; i <= k; i++) if(ngto(i)) nt.push_back(i);
		d = nt.size();
		ql(0,0,0);
		cout << v.size() << endl;
		for(auto x : v){
			for(int i = 0; i < x.size(); i++) cout << x[i] << " ";
			cout << endl;
		}
		v.clear();
		nt.clear();
		memset(dd,0,sizeof(dd));
	}
}
