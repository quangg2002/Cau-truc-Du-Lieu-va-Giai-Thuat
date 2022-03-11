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
		string getMon(){
			return this -> mon;
		}
};
istream& operator >> (istream& in, GV& a){
	a.ma=dem++;
	getline(in,a.ten);
	getline(in,a.mon);
	return in;
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
	scanf("\n");
	while(t--){
		string s;
		getline(cin,s);
		stringstream p(s);
		string x,y;
		while(p>>x){
			x[0]=toupper(x[0]);
			y.push_back(x[0]);
		}
		cout<<"DANH SACH GIANG VIEN BO MON "<<y<<":\n";
		for(int i=0;i<n;i++){
			if(ds[i].getMon()==s) cout<<ds[i]<<y<<endl;
		}
	}
}
