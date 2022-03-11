#include<bits/stdc++.h>
using namespace std;

class SinhVien{
	private:
		string ma, ht, lop, gm;
	public:
		friend istream& operator >> (istream& ,SinhVien& );
		friend ostream& operator << (ostream& ,SinhVien );
		string getMa(){
			return this->ma;
		}
		string getLop(){
			return this->lop;
		}
};
bool cmp(SinhVien a, SinhVien b){
	if(a.getLop()!=b.getLop()){
		return a.getLop()<b.getLop();
	}
	return a.getMa()<b.getMa();
}
void sapxep(SinhVien ds[1005],int n){
	sort(ds,ds+n,cmp);
}
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
	SinhVien ds[1005];
	int n;
	cin>>n;
	for(int i=0;i<n;i++) cin>>ds[i];
	sapxep(ds,n);
	for(int i=0;i<n;i++) cout<<ds[i];
}
