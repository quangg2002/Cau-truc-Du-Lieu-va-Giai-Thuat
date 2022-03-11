#include<bits/stdc++.h>
using namespace std; 
int main(){ 
	string s,s1; 
	getline(cin,s); 
	getline(cin,s1); 
	stringstream ss(s);
	while(ss >> token){
		if(strcmp(ss,s1)!=0){
			cout<<ss<<" ";
		}
	}
}
