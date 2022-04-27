#include<bits/stdc++.h>
using namespace std;

int mod = 1e9 + 7;
int main(){
	int t, n;
	cin >> t;
	while(t--){
		priority_queue <long long, vector < long long >, greater < long long > > q;
		cin >> n;
		for(int i = 0; i < n; i++){
			int x;
			cin >> x;
			q.push(x);
		}
		long long sum = 0;
		while(q.size() > 1){
			long long x = q.top();
			q.pop();
			long long y = q.top();
			q.pop();
			long long z = (x + y) % mod;
			q.push(z);
			sum = (sum + z) % mod;
		}
		cout << sum << endl;
	}
}
