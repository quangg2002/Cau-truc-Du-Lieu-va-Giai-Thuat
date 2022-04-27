#include <bits/stdc++.h> 
using namespace std; 
int n,k,d;
int a[100],b[100]; 
bool ok = true; 
void skt() { 
	int i = k; 
	while(i>0 && a[i]==n-k+i) i--; 
	if(i>0){
		a[i]++;
		for(int j=i+1;j<=k;j++) a[j]=a[i]+j-i;
	}
	if(i==0) ok = false;
} 
int main() { 
	int t; 
	cin>>t; 
	while(t--) { 
		string s;
		cin>>n>>k; 
		d = 1;
		for(int i=1; i<=k; i++) a[i]=i;
		for(int i=1; i<=k; i++){
			cin >> b[i];
			s += (b[i] + '0');
		}
		while(ok) {
			string s2;
			for(int i=1; i<=k; i++) 	s2 += (a[i] + '0');
			if(s2 == s) break;
			else d ++;
			skt(); 
		}
		cout << d << endl;
		ok = true; 
	} 
}
