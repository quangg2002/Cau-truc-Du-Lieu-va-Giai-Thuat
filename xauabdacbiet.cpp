#include <bits/stdc++.h> 
using namespace std; 
int n, k;
int a[100]; 
int ok = 1; 
int kt(){
	int d = 0 , s = 0;
	for(int i = 1; i <= n; i++){
		if(a[i] == 0) d++;
		else d = 0;
		if(d > k) return 0;
		if(d == k) s++;
	}
	return s == 1;
}
void skt() { 
	int i = n; 
	while(i >= 1 && a[i] == 1) {
		a[i] = 0; 
		i--; 
	} 
	if(i==0) ok = 0;
	else a[i] = 1;
} 
int main() {
	int td = 0;
	cin>>n>>k; 
	vector <string> v;
	for(int i=1; i<=n; i++) a[i] = 0; 
	while(ok == 1){  
		if(kt()){
			td++;
			string s;		
			for(int i=1; i<=n; i++){
				if(a[i] == 0) s += "A";
				else s += "B";
			}
			v.push_back(s);
		}
		skt(); 
	}
	cout << td << endl;
	for(auto x : v) cout << x << endl;
}
