#include<bits/stdc++.h>
using namespace std;
 
class SinhVien{
	private:
		string ma, ten, lop, gm;
	public:
		friend istream& operator >>( istream& ,SinhVien& );
		friend ostream& operator <<( ostream& ,SinhVien );
		string getMa(){
			return this -> lop.substr(1,2);
		}
};
istream& operator >>( istream& in,SinhVien& a){
	in>>a.ma;
	scanf("\n");
	getline(in, a.ten);
	in>>a.lop>>a.gm;
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
		string y=s.substr(2,2);
		cout<<"DANH SACH SINH VIEN KHOA "<<s<<":\n";
		for(int i=0;i<n;i++){
			if(ds[i].getMa()==y) cout<<ds[i];
		}
	}
}
