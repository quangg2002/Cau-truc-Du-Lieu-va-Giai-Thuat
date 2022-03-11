#include<bits/stdc++.h>
using namespace std;

class SinhVien{
	private:
		string ma, ten, lop, gm;
	public:
		friend istream& operator >>( istream& ,SinhVien& );
		friend ostream& operator <<( ostream& ,SinhVien );
		string getLop(){
			return this->lop;
		}
};
istream& operator >>( istream& in,SinhVien& a){
	scanf("\n");
	getline(in, a.ma);
	getline(in, a.ten);
	cin>>a.lop>>a.gm;
	return in;
}
ostream& operator <<( ostream& out,SinhVien a){
	out<<a.ma<<" "<<a.ten<<" "<<a.lop<<" "<<a.gm<<endl;
	return out;
}
int main(){
	int n;
	cin>>n;
	SinhVien ds[1005];
	for(int i=0;i<n;i++) cin>>ds[i];
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		cout<<"DANH SACH SINH VIEN LOP "<<s<<":\n";
		for(SinhVien x : ds){
			if(x.getLop()==s) cout<<x;
		}
	}
}
