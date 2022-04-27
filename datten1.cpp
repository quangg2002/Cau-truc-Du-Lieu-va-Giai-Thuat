#include<bits/stdc++.h>
using namespace std;

int n, k;
string s[100];
int a[100];
set < string > st;
void in(){
	for(int i = 1; i <= k; i++) cout << s[a[i]] << " ";
	cout << endl;
}
void ql(int i){
	for(int j = a[i-1] +1; j <= st.size() - k +i; j++){
		a[i] = j;
		if(i == k) in();
		else ql(i+1);
	}
}
int main(){
	cin >> n >> k;
	for(int i = 0; i < n; i++){
		string s;
		cin >> s;
		st.insert(s);
	}
	int d=1;
	for(auto x : st) s[d++] = x;
	for(int i = 1; i <= d; i++) a[i] = i;
	ql(1);
}
