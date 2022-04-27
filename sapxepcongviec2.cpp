#include<bits/stdc++.h>
using namespace std;

struct cv{
	int j, d, p;
};
int cmp(cv a, cv b){
	return a.p > b.p;
}
int main(){
	int t, n;
	cin >> t;
	while(t--){
		cin >> n;
		cv a[n + 5];
		for(int i = 0; i < n; i++) cin >> a[i].j >> a[i].d >> a[i].p;
		sort(a,a + n, cmp);
		int dd[1005] = {0}, d = 0;
		long long sum = 0;
		for(int i = 0; i < n; i++){
			while(dd[a[i].d] == 1 && a[i].d > 0) a[i].d--;
			if(dd[a[i].d] == 0 && a[i].d > 0){
				d++;
				sum += a[i].p;
				dd[a[i].d] = 1;
			}
		}
		cout << d << " " << sum << endl;
		memset(dd, 0 , sizeof(dd));
	}
}
