#include<bits/stdc++.h>
using namespace std;

int n, a[100], dd[100], ok ;
int ktra(){
	for(int i = 1; i < n; i++) if(abs(a[i] - a[i +1]) == 1) return 0;
	return 1;
}
void ql(int i){
	for(int j = 1; j <= n; j++){
		if(dd[j] == 0){
			dd[j] = 1;
			a[i] = j;
			if(i == n){
				if(ktra()){
					ok = 1;
					for(int i = 1; i <= n; i++) cout << a[i];
					cout << endl;
				}
			}
			else ql(i + 1);
			dd[j] = 0;
		}
	}
}
int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n;
		ok = 0;
		for(int i = 1; i <= n; i++) a[i] = i;
		ql(1);
		memset(dd, 0, sizeof(dd));
		if(ok == 0) cout << endl;
	}
}
