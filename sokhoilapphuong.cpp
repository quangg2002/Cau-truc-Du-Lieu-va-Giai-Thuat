#include<bits/stdc++.h>
using namespace std;

int a[100];
long long n, sct;
map <long long, int > dd;
vector < int > v;

void ql(int i, int n){
	for(int j = 0; j <= 1; j++){
		a[i] = j;
		if(i == n - 1){
			long long sum = 0; 
			for(int k = 0; k < n; k++) if(a[k] == 1) sum = sum * 10 + v[k];
			if(dd[sum] == 1 && sum != 0 && sum > sct) sct = sum;
		}
		else ql(i + 1, n);
	}
}

int main(){
	for(int i = 1; i <= 1000; i++) dd[i*i*i] = 1;
	int t;
	cin >> t;
	while(t--){
		cin >> n;
		while(n > 0){
			v.push_back(n%10);
			n /= 10;
		}
		reverse(v.begin(), v.end());
		sct = -1;
		ql(0, v.size());
		cout << sct << endl;
		v.clear();
	}
}
