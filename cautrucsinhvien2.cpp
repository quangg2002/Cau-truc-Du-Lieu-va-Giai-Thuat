#include<bits/stdc++.h>
using namespace std;

struct SinhVien{
	string ma, ht, lop, ns;
	float gpa;
};
void nhapThongTinSV(SinhVien &a){
	a.ma="N20DCCN001";
	getline(cin,a.ht);	
	cin>>a.lop>>a.ns>>a.gpa;
 	if(a.ns[1]=='/') a.ns.insert(0,"0");
 	if(a.ns[4]=='/') a.ns.insert(3,"0");
}
void inThongTinSV(SinhVien a){
	cout<<a.ma<<" "<<a.ht<<" "<<a.lop<<" "<<a.ns<<" "<<fixed<<setprecision(2)<<a.gpa;
}
int main(){
    struct SinhVien a;
    nhapThongTinSV(a);
    inThongTinSV(a);
    return 0;
}
