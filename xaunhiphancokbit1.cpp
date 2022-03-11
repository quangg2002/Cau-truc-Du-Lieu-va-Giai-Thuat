#include<bits/stdc++.h>
using namespace std;

int n, k ,ok = 1;
int a[100];
int kt (){
	int d = 0;
	for(int i = 1; i <= n ; i++)	if(a[i] == 1) 	d++;
	if(d == k) return 1;
	return 0;
}

void skt(){
	int i = n;
	while( i >= 1 && a[i] == 1){
		a[i] = 0;
		i--;
	}
	if(i == 0) ok = 0;
	else a[i] = 1;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n >> k;
		for(int i = 1; i <= n; i++) a[i] = 0;
		while( ok ){
			if(kt()){
				for(int i = 1; i <= n; i++) cout << a[i];
				cout << endl;
			}
			skt();
		}
		ok = 1;
	}
}
