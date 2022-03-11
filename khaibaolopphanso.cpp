#include<bits/stdc++.h>
using namespace std;

class PhanSo{
	private:
		long long tu, mau;
	public:
		PhanSo(long long tu, long long mau){
			this->tu = tu;
			this->mau = mau;
		}
		friend ostream& operator <<(ostream&,PhanSo);
		friend istream& operator >> (istream&,PhanSo&);
		void rutgon();
};
istream& operator >>(istream &in, PhanSo &a){
	cin>>a.tu>>a.mau;
	return in;
}
ostream& operator <<(ostream &out,PhanSo a){
	cout<<a.tu<<"/"<<a.mau;
	return out;
}
void PhanSo::rutgon(){
	long long x=__gcd(tu,mau);
	tu=tu/x;
	mau=mau/x;
}
int main() {
	PhanSo p(1,1);
	cin >> p;
	p.rutgon();
	cout << p;
	return 0;
}
