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
    for(i=0;i<N;i++) cout << ds[i];
    return 0;
}
