#include<bits/stdc++.h>
using namespace std;

class SinhVien{
	private:
		string ma, ht, lop, ns;
		float diem;
	public:
		SinhVien(){
			ma=ht=lop=ns="";
			diem=0;
		}
	void nhap();
	void xuat();
};
void SinhVien :: nhap(){
	ma="B20DCCN001";
	getline(cin , ht);
	cin >> lop >> ns >> diem;
	if(ns[1]=='/') ns.insert(0,"0");
	if(ns[4]=='/') ns.insert(3,"0");
}
void SinhVien :: xuat(){
	cout << ma <<" "<< ht <<" "<< lop <<" "<< ns <<" "<< fixed << setprecision(2) << diem;
}

int main(){
    SinhVien a;
    a.nhap();
    a.xuat();
    return 0;
}
