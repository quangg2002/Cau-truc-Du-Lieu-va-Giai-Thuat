#include<bits/stdc++.h>
using namespace std;
#define a() a
class SinhVien{
	private:
		string ma, ht, lop, ns;
		double gpa;
	public:
		SinhVien(){
			ma=ht=lop=ns="";
			gpa=0;
		}
		friend istream& operator>>(istream& ,SinhVien&);
		friend ostream& operator<<(ostream& ,SinhVien);
};
istream& operator>>(istream& in,SinhVien& a){
	a.ma="B20DCCN001";
	getline(in,a.ht);
	in>>a.lop>>a.ns>>a.gpa;
	if(a.ns[2]!='/') a.ns.insert(0,"0");
	if(a.ns[5]!='/') a.ns.insert(3,"0");
	return in;
}
ostream& operator<<(ostream& out,SinhVien a){
	out<<a.ma<<" "<<a.ht<<" "<<a.lop<<" "<<a.ns<<" "<<fixed<<setprecision(2)<<a.gpa;
	return out;
}
int main(){
    SinhVien a();
    cin >> a;
    cout << a;
    return 0;
}
