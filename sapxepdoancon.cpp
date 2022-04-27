#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		long long n;
		cin >> n;
		long long a[n+5];
		multiset < long long > ms1 , ms2;
		for(int i = 1; i <= n ; i++){
			cin >> a[i];
			ms1.insert(a[i]);
		}
		long long x = a[1], x2;
		for(int i = 1; i <= n - 1 ; i++){
			x = max(a[i], x);
			ms1.erase(ms1.find(a[i]));
			auto x2 = ms1.begin();
			if( x <= *x2) ms2.insert(i);
		}
		if(ms2.size() != 0){
			cout << ms2.size() << endl;
			for(long long x : ms2) cout << x << " ";
		}else cout << 0 << endl;
		cout << endl;
	}
}
