#include<bits/stdc++.h>
using namespace std;

int main(){
	string ma, ten;
	float diem=0, a, b, c, ut=0;
	getline(cin, ma);
	getline(cin, ten);
	cin>>a>>b>>c;
	diem=a+a+b+c;	
	if(ma[2]=='1')	ut = 0.5;
	if(ma[2]=='2')	ut = 1;
	if(ma[2]=='3')	ut = 2.5;
	cout << ma <<" "<< ten <<" ";
	int t;
	t=ut*10;
	if(t%10!=0)		cout <<fixed << setprecision(1) << ut <<" ";
	else			cout << ut <<" ";
	t=diem*10;
	if(t%10!=0)		cout <<fixed << setprecision(1) << diem <<" ";
	else			cout <<diem <<" ";
	if(diem+ut<24){
		cout <<"TRUOT";
	}else{
		cout << "TRUNG TUYEN";
	}
}
