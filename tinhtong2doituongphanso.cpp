#include<bits/stdc++.h>
using namespace std;

class PhanSo{
	private:
		long long tu, mau;
	public:
		PhanSo(long long tu,long long mau);
		friend ostream& operator <<(ostream&,PhanSo);
		friend istream& operator >> (istream&,PhanSo&);
		void rutgon();
		friend PhanSo operator +(PhanSo, PhanSo);
};
PhanSo::PhanSo(long long tu, long long mau){
	this->tu = tu;
	this->mau = mau;
}
istream& operator >>(istream &in, PhanSo &a){
	cin>>a.tu>>a.mau;
	return in;
}
void PhanSo::rutgon(){
	long long x=__gcd(tu,mau);
	tu=tu/x;
	mau=mau/x;
}
PhanSo operator + (PhanSo a, PhanSo b){
	PhanSo tong(1,1);
	tong.tu=a.tu*b.mau+a.mau*b.tu;
	tong.mau=a.mau*b.mau;
	tong.rutgon();
	return tong;
}
ostream& operator <<(ostream &out,PhanSo a){
	cout<<a.tu<<"/"<<a.mau;
	return out;
}
int main() {
	PhanSo p(1,1), q(1,1);
	cin >> p >> q;
	cout << p + q;
	return 0;
}
