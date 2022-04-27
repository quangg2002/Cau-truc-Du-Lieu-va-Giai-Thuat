#include<bits/stdc++.h>
using namespace std;
#define a() a

class NhanVien {
	private:
		string ten, gt, ns, dc, mst, nk;
	public:
		friend istream& operator >> (istream& , NhanVien&);
		friend ostream& operator << (ostream& , NhanVien);
};
istream& operator >> (istream& in , NhanVien& a){
	getline(in, a.ten);
	in>>a.gt>>a.ns;
	in.ignore();
	getline(in, a.dc);
	in>>a.mst>>a.nk;
	return in;
}
ostream& operator << (ostream& out , NhanVien a){
	out<<"00001"<<" "<<a.ten<<" "<<a.gt<<" "<<a.ns<<" "<<a.dc<<" "<<a.mst<<" "<<a.nk;
	return out;
}
int main(){
    NhanVien a();
    cin >> a;
    cout << a;
    return 0;
}
