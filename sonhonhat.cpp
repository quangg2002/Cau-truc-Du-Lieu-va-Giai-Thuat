#include<bits/stdc++.h>
using namespace std;

int main(){
//	int t;
//	cin>>t;
//	while(t--){
		int s, d, a[10005], b[10005], ok = 0;
		cin >> d >> s;
		int sum = s - 1 ,  dd = d - 1, d2 = d - 1;
		for(int i = 0; i < d; i++){
			a[i] = 0;
			b[i] = 0;
		}	
		for(int j = 9; j > 0; j--){
			while(sum >= j && dd >= 0){
				a[dd--] = j;
				sum -= j;
			}
		}
		if(sum == 0) ok = 1;	
		a[0] += 1;
		if(s == 10 && d == 1) ok = 0;
		for(int j = 9; j > 0; j--){
			while(s >= j && d2 >= 0){
				b[d2--] = j;
				s -= j;
			}
		}
		if(sum == 0 && s == 0) ok = 1;	
		if(ok == 1){
			for(int i = 0; i < d; i++) cout << a[i];
			cout << " ";
			for(int i = 0; i < d; i++) cout << b[d - i - 1];
		}
		else cout << "-1 -1" ;
//		cout << endl;
//	}
}
