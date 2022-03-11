#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		long long n;
		cin >> n;
		pair < int , int > a[n];
		for(int i = 0; i < n; i++){
			cin >> a[i].first;
			a[i].second = i;
		}
		sort(a,a + n);
//		for(int i = 0 ; i < n; i++){
//			cout << a[i].first <<" "<<a[i].second <<endl;
//		}
		int hieu = -1,  min = a[0].first, vt = a[0].second;
		for(int i = 1; i < n; i++){
			if(a[i].first > min)		hieu = max(hieu, a[i].second - vt);
			if( vt >  a[i].second){
				vt = a[i].second;
				min = a[i].first;
			}
		}
		cout << hieu << endl;
	}
}
