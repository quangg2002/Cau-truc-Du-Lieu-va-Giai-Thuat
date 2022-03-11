#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; 
	cin>>t;
	vector <string> s;
	cin.ignore();
	for(int i = 0 ; i < t; i++){
		string res;
		getline(cin,res);
		s.push_back(res);
	}
	int dem= 0;
	int ok= 0;
	for(int i= 0; i< s.size(); i++){
		if(i==0 || ok==0){
			cout<< s[i]<<": ";
			ok= 1;
		}
		else if(s[i].size()==0){
			cout<< dem<< endl;
			ok=0;
			dem=0;
		}
		else if(ok==1)
			dem++;
	}
	cout<<dem;
	return 0;
}
