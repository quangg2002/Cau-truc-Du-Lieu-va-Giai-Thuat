#include<bits/stdc++.h>
using namespace std;

int tron(int n){
	if(n<= 10) return n;
	int t= 0, d= 1;
	while(n>= 10){
		if(n%10+t >= 5) t= 1; else t= 0;
		n/= 10;
		d*= 10;
	}
	return (n+t)*d;
}

int main(){
	int t;
	cin>> t;
	while(t--){
		int n;
		cin>> n;
		cout<< tron(n)<< endl;
	}
}
