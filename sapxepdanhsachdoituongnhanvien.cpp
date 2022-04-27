#include<bits/stdc++.h>
using namespace std;

int dem=1;
class NhanVien{
	private:
		int ma;
		string ten, gt, ns, dc, mst, nk;
	public:
		friend istream& operator >> ( istream& , NhanVien& );
		friend ostream& operator << ( ostream& , NhanVien );
		string getThang(){
			return this-> ns.substr(0,2);
		}
		string getNgay(){
			return this-> ns.substr(3,2);
		}
		string getNam(){
			return this-> ns.substr(6,4);
		}
};
istream& operator >> ( istream& in, NhanVien& a){
	a.ma=dem++;
	scanf("\n");
	getline(in,a.ten);
	getline(in,a.gt);
	getline(in,a.ns);
	getline(in,a.dc);
	cin>>a.mst>>a.nk;
	return in;
}
int cmp(NhanVien a, NhanVien b){
	if(a.getNam()<b.getNam()) return 1;
	if(a.getNam()==b.getNam()){
		if(a.getThang()< b.getThang()) return 1;
        if(a.getThang() == b.getThang()){
            if(a.getNgay() < b.getNgay()) return 1;
        }
	}
	return 0;
}
void sapxep(NhanVien ds[50],int n){
	sort(ds,ds+n,cmp);
}
ostream& operator << ( ostream& out, NhanVien a){
	out<<"000";
	if(a.ma<10) out<<"0";
	out<<a.ma<<" ";
	out<<a.ten<<" "<<a.gt<<" "<<a.ns<<" "<<a.dc<<" "<<a.mst<<" "<<a.nk<<endl;
	return out;
}
int main(){
    NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i=0;i<N;i++) cin >> ds[i];
    sapxep(ds, N);
    for(i=0;i<N;i++) cout << ds[i];
    return 0;
}
