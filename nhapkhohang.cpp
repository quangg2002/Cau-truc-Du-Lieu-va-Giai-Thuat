#include<bits/stdc++.h>
using namespace std;
 
map<string, int> mp;
class KH{
	private:
		string ten;
		long long sl, gia;
		double ts, tien;
	public:
		friend istream& operator >>( istream& , KH&);
		friend ostream& operator <<( ostream& , KH );
		string getMa(){
			string t[100],x,y; 
			int n=0;
			stringstream p(ten);
			while(p>>x){
				x[0]=toupper(x[0]);
				t[n++]=x[0];
			}
			for(int i=0;i<n-1;i++) y+=t[i];
			return y;
		}
};
istream& operator >>( istream& in, KH& a){
	scanf("\n");
	getline(in, a.ten);
	in>>a.sl >>a.gia;
	if(a.sl>10) a.ts=a.sl*a.gia*0.05;
	if(8<=a.sl&&a.sl<=10) a.ts=a.sl*a.gia*0.02;
	if(5<=a.sl&&a.sl<8) a.ts=a.sl*a.gia*0.01;
	if(a.sl<5) a.ts=0;
	a.tien=a.sl*a.gia-a.ts;
	return in;
}
ostream& operator <<( ostream& out, KH a){
	mp[a.getMa()]++;
	out<<a.getMa()<<"0"<<mp[a.getMa()]<<" "<<a.ten<<" "<<(long long)a.ts<<" "<<(long long)a.tien<<endl;
	return out;
}
int main(){
	int n;
	cin>>n;
	KH ds[1000];
	for(int i=0;i<n;i++) cin>>ds[i];
	for(int i=0;i<n;i++) cout<<ds[i];
}
