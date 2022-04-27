#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n, d = 1;
		cin>>n;
		string s;
		int a[n+5];
		for(int i=1;i<=n;i++){
			cin >> a[i];
			s += (a[i] + '0');
		}
		sort(a + 1, a+n+1);
		do{
			string s2;
			for(int i=1;i<=n;i++) s2 += (a[i] + '0');
			if(s == s2) break;
			else d++;
		}while(next_permutation(a+1,a+n+1));
		cout << d << endl;
	}
}
