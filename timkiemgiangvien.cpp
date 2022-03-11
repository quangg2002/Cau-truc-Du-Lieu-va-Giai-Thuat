#include<bits/stdc++.h>
using namespace std;
 
int dem=1;
class GV{
	private:
		int ma;
		string  ten, mon;
	public:
		friend istream& operator >> (istream& , GV& );
		friend ostream& operator << (ostream& , GV );
		string getTen(){
			return ten;
		}
		string getMon(){
			string x,y;
			stringstream p(mon);
			while(p>>x){
				x[0]=toupper(x[0]);
				y.push_back(x[0]);
			}
			return y;
		}
};
istream& operator >> (istream& in, GV& a){
	a.ma=dem++;
	getline(in,a.ten);
	getline(in,a.mon);
	return in;
}
int xuly (string a, string b){
	for(int i=0;i<a.length();i++) a[i]=tolower(a[i]);
	for(int i=0;i<b.length();i++) b[i]=tolower(b[i]);
	if(a.find(b)!=-1) return 1;
	return 0; 
}
ostream& operator << (ostream& out, GV a){
	out<<"GV";
	if(a.ma<10) out<<"0";
	out<<a.ma<<" "<<a.ten<<" ";
	return out;
}
int main(){
	int n;
	cin>>n;
	scanf("\n");
	GV ds[n];
	for(int i=0;i<n;i++) cin>>ds[i];
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		cout<<"DANH SACH GIANG VIEN THEO TU KHOA "<<s<<":\n";
		for(int i=0;i<n;i++) 
			if(xuly(ds[i].getTen(),s))
				cout<<ds[i]<<ds[i].getMon()<<endl;
	}
}
