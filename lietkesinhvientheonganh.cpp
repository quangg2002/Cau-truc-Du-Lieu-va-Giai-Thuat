#include<bits/stdc++.h>
using namespace std;
 
class SinhVien{
	private:
		string ma, ten, lop, gm;
	public:
		friend istream& operator >>( istream& ,SinhVien& );
		friend ostream& operator <<( ostream& ,SinhVien );
		string getMa(){
			return this -> ma.substr(5,2);
		}
		string getLop(){
			return this -> lop.substr(0,1);
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
	scanf("\n");
	while(t--){
		string s;
		getline(cin,s);
		for(int i=0;i<s.length();i++) s[i]=toupper(s[i]);
		cout<<"DANH SACH SINH VIEN NGANH "<< s <<":\n";
		if(s=="KE TOAN"){
			for(int i=0;i<n;i++){
				if(ds[i].getMa()=="KT") cout<<ds[i];
			}
		}
		if(s=="CONG NGHE THONG TIN"){
			for(int i=0;i<n;i++){
				if(ds[i].getMa()=="CN"&& ds[i].getLop()!="E") cout<<ds[i];
			}
		}
		if(s=="AN TOAN THONG TIN"){
			for(int i=0;i<n;i++){
				if(ds[i].getMa()=="AT"&& ds[i].getLop()!="E") cout<<ds[i];
			}
		}
		if(s=="VIEN THONG"){
			for(int i=0;i<n;i++){
				if(ds[i].getMa()=="VT") cout<<ds[i];
			}
		}
		if(s=="DIEN TU"){
			for(int i=0;i<n;i++){
				if(ds[i].getMa()=="DT") cout<<ds[i];
			}
		}
	}
}
