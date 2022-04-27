#include<bits/stdc++.h>
using namespace std;
int main(){
	int t; 
	cin>>t;
	cin.ignore();
	while(t--){
		int d=0;
		string s, y;
		getline(cin, s);
		stringstream p(s);
		while( p >> y){
			d++;
		}
		cout<<d<<endl;
	}
}
