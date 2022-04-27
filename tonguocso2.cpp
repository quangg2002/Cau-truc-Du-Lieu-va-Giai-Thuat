#include<bits/stdc++.h>
using namespace std;

int xuly(int m){
	int sum = 1;
	for(int i = 2;i <= sqrt(m);i++){
		if(m % i == 0){
			sum += i;
			int k = m/i;
			if( i != k ) sum += k;
			if(sum > m) return 1;
		}
	}
	return 0;
}

int main(){
	int a, b, dem = 0;
	cin >> a >> b;
	for(int i = a;i <= b; i++)	if(xuly(i)) dem++;
	cout << dem << endl;
}
