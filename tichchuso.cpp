#include<bits/stdc++.h>
using namespace std;

int a[50];
void tim(long long n){
	if(n < 10){
		cout << n;
		return;
	}
	int  d=0;
	for(int i = 9; i > 1; i--){
		while(n % i == 0){
			n = n / i;
			a[d] = i;
			d++;
		}
	}
	if(n > 10){
		cout<<"-1";
		return;
	}
	for(int i = d-1; i >= 0; i--)	cout << a[i];
}
int main(){
	int t;
	cin>>t;
	while(t--){
		long long n;
		cin >> n;
		tim(n);
		cout << endl;
	}
}
