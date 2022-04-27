#include<bits/stdc++.h>
using namespace std;


void ql(int n, char a, char b, char c){
	if(n == 1){
		cout << a << " -> " << c << endl;
		return;
	}
	ql(n - 1, a, c, b);
	ql(1, a, b, c);
	ql(n - 1, b, a, c);
}

int main(){
	int n;
	cin >> n;
	char a = 'A', b = 'B', c = 'C';
	ql(n, a, b, c);
}
