#include<bits/stdc++.h>
using namespace std;

class DN{
	private:
		string ma, ten;
		int sl;
	public:
		friend istream& operator >> (istream& , DN& );
		friend ostream& operator << (ostream& , DN );
		int getSl(){
			return this -> sl;
		}
		string getMa(){
			return this -> ma;
		}
};
bool cmp(DN a, DN b){
	if(a.getSl()!=b.getSl()) return a.getSl()>b.getSl();
	return a.getMa()<b.getMa();
}
istream& operator >> (istream& in, DN& a){
	in>>a.ma;
	scanf("\n");
	getline(in,a.ten);
	in>>a.sl;
	return in;
}
ostream& operator << (ostream& out, DN a){
	out<<a.ma<<" "<<a.ten<<" "<<a.sl<<endl;
	return out;
}
int main(){
	int n;
	cin>>n;
	DN ds[n];
	for(int i=0;i<n;i++) cin>>ds[i];
	sort(ds,ds+n,cmp);
	for(int i=0;i<n;i++) cout<<ds[i];
}
