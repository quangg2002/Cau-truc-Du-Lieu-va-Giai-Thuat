#include<bits/stdc++.h>
using namespace std;
struct PhanSo{
	long long tu,mau;
};
void nhap(PhanSo &a){
	cin>>a.tu>>a.mau;
}
long long ucln(long long a,long long b){
	while(b!=0){
		long long t=a%b;
		a=b;
		b=t;
	}
	return a;
}
void rutgon(PhanSo &a){
	long long x=ucln(a.tu,a.mau);
	a.tu=a.tu/x;
	a.mau=a.mau/x;
}
PhanSo tong(PhanSo a, PhanSo b){
	PhanSo tong;
	tong.tu=a.tu*b.mau+b.tu*a.mau;
    tong.mau=a.mau*b.mau;
	rutgon(tong);
	return tong;
}
void in(PhanSo a){
   cout << a.tu <<"/"<<a.mau;
}
int main() {
	struct PhanSo p,q;
	nhap(p); nhap(q);
	PhanSo t = tong(p,q);
	in(t);
	return 0;
}

