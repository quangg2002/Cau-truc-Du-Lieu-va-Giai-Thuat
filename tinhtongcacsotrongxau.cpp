#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>> t;
	cin.ignore();
	while(t--){
		int n;
		long long sum=0;
		string s;
		getline(cin, s);
		for(int i= 0; i< s.length(); i++){
			if(s[i]<'0' || s[i]>'9') s[i]= ' ';
		}
		stringstream p(s);
		while(p>>n)
			sum+=n;
		cout<< sum<< endl;
	}
}
