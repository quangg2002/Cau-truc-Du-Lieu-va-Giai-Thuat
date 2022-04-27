#include<bits/stdc++.h>
using namespace std;
struct PhanSo{
	long long tu,mau;
};
long long ucln(long long a,long long b){
	while(b!=0){
		long long t=a%b;
		a=b;
		b=t;
	}
	return a;
}
void nhap(PhanSo &a){
	cin>>a.tu>>a.mau;
}
void rutgon(PhanSo &a){
	long long x=ucln(a.tu,a.mau);
	a.tu=a.tu/x;
	a.mau=a.mau/x;
}
void in(PhanSo a){
   cout << a.tu <<"/"<<a.mau;
}
int main() {
	struct PhanSo p;
	nhap(p);
	rutgon(p);
	in(p);
	return 0;
}
