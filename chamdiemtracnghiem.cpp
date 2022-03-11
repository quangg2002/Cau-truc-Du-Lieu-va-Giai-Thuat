#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		char a[]="ABBADCCABDCCABD",c;
		char b[]="ACCABCDDBBCDDBB";
		int n;
		cin>>n;
		double sum=0;
		if(n==101){
			for(int i=0;i<15;i++){
				cin>> c;
				if(c==a[i]) sum++;
			}
		}
		if(n==102){
			for(int i=0;i<15;i++){
				cin>> c;
				if(c==b[i]) sum++;
			}
		} 
		cout << fixed << setprecision(2) << sum*2/3 << endl;
	}
	return 0;
}
