#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	cin.ignore();
	while(t--){
		string a, b="", k;
		getline(cin,a);
		for(int i=0; i<a.size(); i++){
			if(a[i]<'0'||a[i]>'9'){
				a[i]=' ';
			}
		}
		stringstream s(a);
		while(s>>k){
			b=b+k;
		}
		if(b[0]=='8'&&b[1]=='4'){
			cout << 0;
			for(int i=2; i<b.size(); i++){
				cout << b[i];
			}
		}
		else	cout << b;
		cout << endl;
	}
}
