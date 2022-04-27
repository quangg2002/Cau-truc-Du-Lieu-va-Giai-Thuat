#include<bits/stdc++.h>
using namespace std;

int tcs(long long n){
	int sum=0;
	while( n > 0){
		sum += n % 10;
		n /= 10;
	}
	return sum;
}

int tn(string s1){
	string s2 = s1;
	reverse(s1.begin(), s1.end());
	if( s1 == s2) return 1;
	return 0;
}

int main(){
	int n, d=0;
	cin >> n;
	long long m=pow(10,n-1);
	long long p=pow(10,n);
	for(int i=m; i<=p ;i++){
		int x=i;
//		if(tcs(i) == 18){
			string s = to_string(i);
			if(tn(s)==1) d++;
//		}	
	}
	cout << d;
}
