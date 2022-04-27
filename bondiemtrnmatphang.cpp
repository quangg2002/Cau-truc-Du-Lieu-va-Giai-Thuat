#include<bits/stdc++.h>
using namespace std;

int main (){
	int t;
	cin>>t;
	while(t--) {
		int a[10], b[10], c[10], d[10];
		for (int i = 0; i < 3; i++) cin>>a[i];
		for (int i = 0; i < 3; i++) cin>>b[i];
		for (int i = 0; i < 3; i++) cin>>c[i];
		for (int i = 0; i < 3; i++) cin>>d[i];
		int e1 = b[0] - a[0];
		int e2 = b[1] - a[1];
		int e3 = b[2] - a[2];
		int f1 = c[0] - a[0];
		int f2 = c[1] - a[1];
		int f3 = c[2] - a[2];
		int g1 = d[0] - a[0];
		int g2 = d[1] - a[1];
		int g3 = d[2] - a[2];
		int o = e2 * f3 - e3 * f2;
		int p = e3 *f1 - e1 *f3;
		int q= e1 * f2 - e2 * f1;
		if (g1 * o + g2 * p + g3 * q == 0) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
}
