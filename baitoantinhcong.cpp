#include<bits/stdc++.h>
using namespace std;

struct NV{
	string HT,CV;
	long long lcb, snc, pc;
};
int main(){
	long long k, lt=0, thuong;
	struct NV a;
	getline(cin, a.HT);
	cin>> a.lcb>> a.snc>>  a.CV;
	if(a.CV=="GD") a.pc=250000;
	if(a.CV=="PGD") a.pc=200000;
	if(a.CV=="TP") a.pc=180000;
	if(a.CV=="NV") a.pc=150000;
	if(a.snc>=25)		k=20;
	if(a.snc<22)		k=0;
	if(a.snc>=22 && a.snc<25)		k=10;
	lt=a.lcb*a.snc;
	thuong=lt*k/100;
	cout<<"NV01"<<" "<< a.HT<<" "<<lt<<" "<<thuong<<" "<<a.pc<<" "<<lt+thuong+a.pc;
}
