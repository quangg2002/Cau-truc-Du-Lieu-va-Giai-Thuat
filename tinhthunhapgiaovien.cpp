#include<bits/stdc++.h>
using namespace std;

int main(){
	string ma, ten;
	long long luong, PC;
	getline(cin, ma);
	getline(cin, ten);
	cin>> luong;
	cout<<ma<<" "<<ten<<" "<<(ma[3]-'0'+10*(ma[2]-'0')) <<" ";
	if(ma.substr(0,2)=="HT") PC=2000000;
	if(ma.substr(0,2)=="HP") PC=900000;
	if(ma.substr(0,2)=="GV") PC=500000;
	cout<<PC<<" ";
	luong= luong * (ma[3]-'0'+10*(ma[2]-'0')) + PC;
	cout<<luong;
	
}
