#include<bits/stdc++.h>
using namespace std;

int main(){
//	int t;
//	cin >> t;
//	while(t--){
		int n;
		cin >> n;
		int a[n+5], b[100005], c[1000005], x = 0, y = 0;
		for(int i=0;i<n;i++)	cin >> a[i];
		for (int i=0; i<n; i++){
			if(i % 2 == 0) b[x++] = a[i];
			else c[y++] = a[i];
   		}
   		sort(b, b + x);
   		sort(c, c + y ,greater<int>());
   		for(int i=0;i < x;i++){
   			cout << b[i] << " " ;
			if(i < y) cout << c[i] << " ";
		}
		cout<<endl;
//	}
}
