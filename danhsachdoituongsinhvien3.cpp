#include<bits/stdc++.h>
using namespace std;

int dem=1;
class SinhVien{
	private:
		int ma;
		string ten, lop, ns;
		float gpa;
	public:
		SinhVien(){
			ten=lop=ns="";
			ma=gpa=0;
		}
		friend istream& operator >> (istream& ,SinhVien&);
		friend ostream& operator << (ostream& ,SinhVien);
		float getGpa();
};
istream& operator >> (istream& in,SinhVien& a){
	a.ma=dem++;
	scanf("\n");
	getline(in,a.ten);
	in>>a.lop>>a.ns>>a.gpa;
	if(a.ns[1]=='/') a.ns.insert(0,"0");
	if(a.ns[4]=='/') a.ns.insert(3,"0");
	return in;
}
float SinhVien:: getGpa(){
	return this->gpa;
}
bool cmp(SinhVien a, SinhVien b){
	return a.getGpa()>b.getGpa();
}
void sapxep( SinhVien ds[50],int n){
	sort(ds,ds+n,cmp);
}
ostream& operator << (ostream& out,SinhVien a){
	out<<"B20DCCN0";
	if(a.ma<10) out<<"0";
	out<<a.ma<<" ";
	stringstream p(a.ten);
	string x;
	while(p>>x){
		x[0]=toupper(x[0]);
		for(int i=1;i<x.size();i++) x[i]=tolower(x[i]);
		out<<x<<" ";
	}
	out<<a.lop<<" "<<a.ns<<" "<<fixed<<setprecision(2)<<a.gpa<<endl;
	return out;
}
int main(){
    SinhVien ds[50];
    int N, i;
    cin >> N;
    for(i=0;i<N;i++){
        cin >> ds[i];
    }
    sapxep(ds, N);
    for(i=0;i<N;i++){
        cout << ds[i];
    }
    return 0;
}
