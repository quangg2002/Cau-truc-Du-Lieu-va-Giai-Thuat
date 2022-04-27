#include<bits/stdc++.h>
using namespace std;
int dem=1;
class SinhVien{
	private:
		int ma;
		string ten, lop, ns;
		double gpa;
	public:
		SinhVien(){
			ma=gpa=0;
			ten=lop=ns="";
		}
		friend istream& operator >>( istream& , SinhVien& );
		friend ostream& operator <<( ostream& , SinhVien );
};
istream& operator>>(istream& in,SinhVien& a){
	a.ma=dem++;
	in.ignore();
	getline(in,a.ten);
	in>>a.lop>>a.ns>>a.gpa;
	if(a.ns[2]!='/') a.ns.insert(0,"0");
	if(a.ns[5]!='/') a.ns.insert(3,"0");
	return in;
}
ostream& operator<<(ostream& out,SinhVien a){
	out<<"B20DCCN0";
	if(a.ma<10) out<<"0";
	out<<a.ma<<" ";
	out<<a.ten<<" "<<a.lop<<" "<<a.ns<<" "<<fixed<<setprecision(2)<<a.gpa<<endl;
	return out;
}
int main(){
    SinhVien ds[50];
    int N, i;
    cin >> N;
    for(i=0;i<N;i++){
        cin >> ds[i];
    }
    for(i=0;i<N;i++){
        cout << ds[i];
    }
    return 0;
}
