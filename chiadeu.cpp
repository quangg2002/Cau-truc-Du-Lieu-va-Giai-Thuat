#include<bits/stdc++.h>
using namespace std;

int n, k, a[100], dd[100] = {0}, sum, ok, d;
void ql(int dem, int s, int k){
	if(dem == k){
		d++;
	}
	for(int i = k; i <= n; i++){
		if(dd[i] == 0){
			dd[i] = 1;
			if(s + a[i] == sum) ql(dem + 1, 0, i);
			if(s + a[i] < sum) ql(dem, s + a[i], i + 1);
		}
		dd[i] = 0;
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n >> k;
		sum = 0;
		ok = 0;
		d = 0;
		memset(dd, 0 , sizeof(dd));
		for(int i = 1; i <= n; i++){
			cin >> a[i];
			sum += a[i];
		}
		if(sum % k != 0) cout << "0";
		else{
			sum /= k;
			ql(0,0,1);
			cout << d;
		}
	}
}
