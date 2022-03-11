#include<bits/stdc++.h>
using namespace std;

class SinhVien{
	private:
		string ma, ht, lop, gm;
	public:
		friend istream& operator >> (istream& ,SinhVien& );
		friend ostream& operator << (ostream& ,SinhVien );
		friend bool operator < (SinhVien a, SinhVien b){
			return a.ma < b.ma;
		}
};

istream& operator >> (istream& in,SinhVien& a){
	scanf("\n");
	getline(in,a.ma);
	getline(in,a.ht);
	in>>a.lop>>a.gm;
	return in;
}
ostream& operator << (ostream& out,SinhVien a){
	out<<a.ma<<" "<<a.ht<<" "<<a.lop<<" "<<a.gm<<endl;
	return out;
}
int main(){
	vector <SinhVien> v;
	SinhVien t;
	while(cin>>t){
		v.push_back(t);
	}
	sort(v.begin(),v.end());
	for(SinhVien x : v) cout<<x;
}

