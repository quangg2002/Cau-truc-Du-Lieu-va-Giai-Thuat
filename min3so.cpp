#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n, x=INT_MAX, y =INT_MAX, z= INT_MAX;
		cin >> n;
		int a[n+5];
		for(int i=0;i<n;i++){
			cin >> a[i];
			if(x > a[i]) x = a[i];
		}
		for(int i=0;i<n;i++)	if(a[i] > x && a[i] < y ) y = a[i];
		for(int i=0;i<n;i++)	if(a[i] > x && a[i] > y && z > a[i]) z = a[i];
		cout << x + y +z << endl;
	}
}
