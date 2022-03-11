#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	cin.ignore();
	set<string> s;
	while(n--){
		string x;
		getline(cin,x);
		s.insert(x);
	}
	cout<<s.size()<<endl;
}
