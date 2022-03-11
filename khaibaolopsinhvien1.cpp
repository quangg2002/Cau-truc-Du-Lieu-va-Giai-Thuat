#include<bits/stdc++.h>
using namespace std;
#define a() a
class SinhVien{
	private:
		string ma, ht,lop,ns;
		double gpa;
	public:
		SinhVien(){
			ma=ht=lop=ns="";
			gpa=0;
		}
		friend void nhap(SinhVien &);
		friend void in(SinhVien);
};
void nhap(SinhVien &a){
	a.ma="B20DCCN001";
	getline(cin,a.ht);
	cin>>a.lop>>a.ns>>a.gpa;
	if(a.ns[2]!='/') a.ns.insert(0,"0");
	if(a.ns[5]!='/') a.ns.insert(3,"0");
}
void in(SinhVien a){
	cout<<a.ma<<" "<<"Nguyen Van A"<<" "<<a.lop<<" "<<a.ns<<" ";
	cout<<fixed<<setprecision(2)<<a.gpa;
}
int main(){
    SinhVien a();
    nhap(a);
    in(a);
    return 0;
}
