#include<bits/stdc++.h>
using namespace std;

char c;
int m, n;
void ql(int stt, int d, string s){
	if(stt == n){
		cout << s << endl;
		return;
	}
	for(int i = d; i <= m; i++) ql(stt + 1, i, s + (char)(i + 'A' - 1));
}

int main(){
	cin >> c >> n;
	m = c - 'A' + 1;
	ql(0,1,"");
}
