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
			string t[100],x;  int n=0;
			stringstream p(ten);
			while(p>>x){
				t[n++]=x;
			}
			return t[n-1];
		}
		string getMon(){
			string z,t;
			stringstream p(mon);
			while(p>>z){
				z[0]=toupper(z[0]);
				t.push_back(z[0]);
			}
			return t;
		}
};
istream& operator >> (istream& in, GV& a){
	a.ma=dem++;
	getline(in,a.ten);
	getline(in,a.mon);
	return in;
}
bool cmp(GV a, GV b){
	return a.getTen()<b.getTen();
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
	stable_sort(ds,ds+n,cmp);
	for(int i=0;i<n;i++) cout<<ds[i]<<ds[i].getMon()<<endl;
}
