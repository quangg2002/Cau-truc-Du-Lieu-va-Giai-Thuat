#include <bits/stdc++.h> 
using namespace std; 
int n;
int a[100]; 
int ok = 1; 
//int dx(){
//	for(int k=1;k<=n/2;k++) if(a[k] != a[n-k+1]) return 0;
//	return 1;
//}
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
	int t;
	cin>>t;
	while(t--){
		cin>>n; 
		for(int i=1; i<=n; i++) a[i] = 0; 
		while(ok == 1){  
		//	if(dx()){
				for(int i=1; i<=n; i++)		cout << a[i]; 
				cout << " "; 
		//	}
			skt(); 
		}
		cout <<  endl;
		ok=1;
	}
}
