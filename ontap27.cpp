#include<bits/stdc++.h>
using namespace std;

int main(){
	vector < long long > v;
	long long a, b;
	cin >> a >>b;
	queue < long long > q;
	q.push(4);
	q.push(7);
	while(!q.empty()){
		long long x = q.front();
		v.push_back(x);
		if(x > 1e9) break;
		q.pop();
		q.push(x * 10 + 4);
		q.push(x * 10 + 7);
	}
	long long vt, kq = 0;
	vt = lower_bound(v.begin(), v.end(), a) - v.begin();
	cout << v[vt] << endl;
	while(a <= b){
		long long d = min(v[vt], b) - a + 1;
		a = v[vt] + 1;
		kq += d * v[vt++];
	}
	cout << kq;
}
