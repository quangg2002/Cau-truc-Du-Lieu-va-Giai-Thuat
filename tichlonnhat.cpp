#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	int a[n + 5];
	for(int i = 0; i < n; i++) cin >> a[i];
	sort(a, a + n);
	long long t1 = a[0] * a[1];
	long long t2 = a[0] * a[1] * a[n-1];
	long long t3 = a[n-1] * a[n-2] * a[n-3];
	long long t4 = a[n-1] * a[n-2];
	long long tmax = max(t1,t2);
	long long tmax1 = max(tmax , t3);
	long long tmax2 = max(tmax1, t4);
	cout << tmax2 ;
}
